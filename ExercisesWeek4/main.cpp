#include <string>
#include <iostream>
#include <vector>
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
//     Student room[10];
//     auto nrStudents = 0;

//     // Enter students into the classroom
//     for (int count = 0; count < (int)size(room); count++)
//     {
//         cout << "Do you want to add a student? (yes/no) ";
//         string enterMore = "no";
//         cin >> enterMore;
//         if (enterMore != "yes")
//             break;

//         Student student;
//         InputStudent(student);
//         room[count] = student;
//         nrStudents++;
//     }

//     // Find the oldest student
//     Student oldestStudent;
//     oldestStudent.birthYear = 0;
//     for (int count = 0; count < nrStudents; count++)
//     {
//         if (room[count].birthYear > oldestStudent.birthYear)
//             oldestStudent = room[count];
//     }
//     cout << "The oldest student is:" << endl;
//     PrintStudent(oldestStudent);
// }
#pragma endregion Exercise_2

// EXERCISE 3
#pragma region Exercise_3
enum DishType
{
    Vegiterian,
    Vegan,
    Meat
};

class Dish
{
public:
    string name;
    float price;
    DishType type;
    int nrOfCalories;

    void Print()
    {
        auto type =
            this->type == Vegiterian ? "Vegiterian"
            : this->type == Vegan    ? "Vegan"
            : this->type == Meat     ? "Meat"
                                     : "Dishtype undefined";
        cout << this->name << "\t" << this->price << " sek\n"
             << type << "\t" << this->nrOfCalories << " calories\n\n";
    }
};

int main()
{
    vector<Dish> todaysLunch;

    Dish dish_1;
    dish_1.name = "Pasta with cheese and mushrooms";
    dish_1.price = 113;
    dish_1.type = Vegiterian;
    dish_1.nrOfCalories = 1000;
    todaysLunch.push_back(dish_1);
    Dish dish_2;
    dish_2.name = "Grass with dry dirt and localy produces mudd";
    dish_2.price = 999;
    dish_2.type = Vegan;
    dish_2.nrOfCalories = 1;
    todaysLunch.push_back(dish_2);
    Dish dish_3;
    dish_3.name = "Violently slughtered unicorn bathing in fresh blood";
    dish_3.price = 250;
    dish_3.type = Meat;
    dish_3.nrOfCalories = 2000;
    todaysLunch.push_back(dish_3);

    for (auto d : todaysLunch)
        d.Print();
}
#pragma endregion Exercise_3
