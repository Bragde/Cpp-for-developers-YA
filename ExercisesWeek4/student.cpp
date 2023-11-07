#include "student.h"
#include <memory>
#include <iostream>

void Student::CreateStudent(Student student)
{
    cout << "Firstname: ";
    getline(cin, student.firstName);
    cout << "Lastname: ";
    getline(cin, student.lastName);
    cout << "City: ";
    getline(cin, student.city);
    cout << "Birthyear: ";
    cin >> student.birthYear;
}

void Student::Print()
{
    cout << "Firstname: " << this->firstName << "\nLastname: " << this->lastName << "\nCity: " << this->city << "\nBirthyear: " << this->birthYear << endl;
}