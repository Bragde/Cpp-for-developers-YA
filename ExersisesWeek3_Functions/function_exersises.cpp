#include <string>
#include <vector>
#include <iostream>
#include "functions.h"

using namespace std;

void function_one()
{
    cout << "Enter a birth year: ";
    string input;
    getline(cin, input);

    cout << getAgeMessage(stoi(input));
}

void function_two()
{
    string firstName, lastName;
    cout << "Enter first name: ";
    getline(cin, firstName);
    cout << "Enter last name: ";
    getline(cin, lastName);

    auto fullName = generateName(firstName, lastName);

    cout << "The full name you entered is " << fullName;
}

void function_three()
{
    cout << "Enter a text containing some numbers: ";
    string input;
    getline(cin, input);

    auto numbersCount = countNumbers(input);
    auto sfix = numbersCount == 1 ? " number." : " numbers.";
    cout << "The text \"" << input << "\" contains " << numbersCount << sfix;
}

void function_four()
{
    string personNumber;
    cout << "Enter last four digits of person number: ";
    getline(cin, personNumber);

    auto sfix = isWoman(stoi(personNumber)) ? " is a woman." : " is not a woman.";
    cout << "Person number ending in " << personNumber << sfix;
}

void function_five()
{
    // string words;
    // cout << "Enter some words: ";
    // getline(cin, words);

    // istream wrd;

    // vector<string> wordsVector;
    // for (auto w : words)
    //     wordsVector.push_back(w);

    // findLongestWord(wordsVector)
}
