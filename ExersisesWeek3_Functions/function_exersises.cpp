#include <string>
#include <vector>
#include <iostream>
#include <sstream>
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

    auto sfix = isWoman(stoll(personNumber)) ? " is a woman." : " is not a woman.";
    cout << "Person number ending in " << personNumber << sfix;
}

void function_five_six()
{
    // Enter som words from the cli and put them in a stringstream
    cout << "Enter some words: ";
    string sentence;
    getline(cin, sentence);
    stringstream ss(sentence);

    // Convert stringstream to vector<string>
    string word;
    vector<string> words;
    while (ss >> word)
        words.push_back(word);

    auto [longestWord, length] = getLongestWord(words);

    string sfix = length == 1 ? " character " : " characters ";
    cout << "The longest word is \"" << longestWord << "\", and it is " << length << sfix << "long.";
}
