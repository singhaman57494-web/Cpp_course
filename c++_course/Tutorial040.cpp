//                               multilevel inheritance

#include <iostream>
using namespace std;

//          class 1

class student
{
protected:
    int rollNo;

public:
    void set_RollNumber(int);
    void get_RollNumber(void);
};

void student::set_RollNumber(int r)
{
    rollNo = r;
}

void student::get_RollNumber()
{
    cout << "Roll no : " << rollNo << endl;
}

// class 2

class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam::get_marks()
{
    cout << "The marks obtained in maths are : " << maths << endl;
    cout << "The marks obtained in physics are : " << physics << endl;
}

//               class 3

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_RollNumber();
        get_marks();
        cout << "your percentage is : " << (maths + physics) / 2 <<" %"<< endl;
    }
};

int main()
{
    Result harry;
    harry.set_RollNumber(420);
    harry.set_marks(94.4, 90.0);
    harry.display_result();

    return 0;
}