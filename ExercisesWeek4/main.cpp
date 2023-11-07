#include <string>
#include <iostream>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    string city;
    int birthYear;
};

// EXERCISE 1a
#pragma region Exercise_1a
// void InputStudent(Student *p)
// {
//     cout << "Firstname: ";
//     // getline(cin, p->firstName); // Problem här vid 2a anropet. getline reagerar som om det redan fans input från kbord och hoppar över Firstname.
//     cin >> p->firstName;
//     cout << "Lastname: ";
//     cin >> p->lastName;
//     cout << "City: ";
//     cin >> p->city;
//     cout << "Birthyear: ";
//     cin >> p->birthYear;
// }

// void PrintStudent(const Student *p)
// {
//     cout << "Firstname: " << p->firstName << "\nLastname: " << p->lastName << "\nCity: " << p->city << "\nBirthyear: " << p->birthYear << endl;
// }

// int main()
// {
//     Student *student_1 = new Student();
//     Student *student_2 = new Student();

//     InputStudent(student_1);
//     InputStudent(student_2);

//     PrintStudent(student_1);
//     PrintStudent(student_2);

//     delete student_1;
//     delete student_2;
// }
#pragma endregion Exercise_1a

/*  EXERCISE 1b
    Reflect why we are using const * in Print:
    Printmetoden ska inte ändra (kunna ändra) något på studentobjektet.
    Detta deklareras och säkerställs genom att använda const.
*/

//  EXERCISE 1c
//  Refactorize – use & reference instread
#pragma region Exercise_1c
// void InputStudent(Student &p)
// {
//     cout << "Firstname: ";
//     cin >> p.firstName;
//     cout << "Lastname: ";
//     cin >> p.lastName;
//     cout << "City: ";
//     cin >> p.city;
//     cout << "Birthyear: ";
//     cin >> p.birthYear;
// }

// void PrintStudent(const Student &p)
// {
//     cout << "Firstname: " << p.firstName << "\nLastname: " << p.lastName << "\nCity: " << p.city << "\nBirthyear: " << p.birthYear << endl;
// }

// int main()
// {
//     Student student_1;
//     Student student_2;

//     InputStudent(student_1);
//     InputStudent(student_2);

//     PrintStudent(student_1);
//     PrintStudent(student_2);
// }
#pragma endregion Exercise_1c

//  EXERCISE 2
#pragma region Exercise_2
void InputStudent(Student &p)
{
    cout << "Firstname: ";
    cin >> p.firstName;
    cout << "Lastname: ";
    cin >> p.lastName;
    cout << "City: ";
    cin >> p.city;
    cout << "Birthyear: ";
    cin >> p.birthYear;
}

void PrintStudent(const Student &p)
{
    cout << "Firstname: " << p.firstName << "\nLastname: " << p.lastName << "\nCity: " << p.city << "\nBirthyear: " << p.birthYear << endl;
}

int main()
{
    Student room[10];
    auto nrStudents = 0;

    // Enter students into the classroom
    for (int count = 0; count < (int)size(room); count++)
    {
        cout << "Do you want to add a student? (yes/no) ";
        string enterMore = "no";
        cin >> enterMore;
        if (enterMore != "yes")
            break;

        Student student;
        InputStudent(student);
        room[count] = student;
        nrStudents++;
    }

    // Find the oldest student
    Student oldestStudent;
    oldestStudent.birthYear = 0;
    for (int count = 0; count < nrStudents; count++)
    {
        if (room[count].birthYear > oldestStudent.birthYear)
            oldestStudent = room[count];
    }
    cout << "The oldest student is:" << endl;
    PrintStudent(oldestStudent);
}
#pragma endregion Exercise_2
