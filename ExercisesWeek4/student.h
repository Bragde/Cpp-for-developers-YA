#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <string>
using namespace std;

class Student
{
public:
    string firstName;
    string lastName;
    string city;
    int birthYear;

    void CreateStudent(Student student);
    void Print();
};

#endif