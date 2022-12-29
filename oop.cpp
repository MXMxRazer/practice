#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    string address;
    int rollNo;

public:
    Student(string name, string address, int rollNo)
    {
        this->name = name;
        this->address = address;
        this->rollNo = rollNo;
    }

    string getName()
    {
        return this->name;
    }
};

int main()
{
    Student *student = new Student("firstStudent", "xyz-Stree,abc-City", 1004);
    string nameOfStudent = student->getName();
    cout << "Name (Student): " << nameOfStudent << endl;
    return 0;
}