#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;

    Student(int r)
    {
        rollNo = r;
    }

    Student(const Student &s)
    {
        rollNo = s.rollNo;
    }

    void display()
    {
        cout << "Roll No = " << rollNo << endl;
    }
};

int main()
{
    Student s1(101);

    Student s2(s1);

    s1.display();
    s2.display();

    return 0;
}