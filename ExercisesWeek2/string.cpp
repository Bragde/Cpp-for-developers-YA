#include <iostream>
#include <cctype>
#include "functions.h"
#include <algorithm>
#include <sstream>

using namespace std;

// Predicate functions
bool not_alpha(char c) { return !isalpha(c); }

// Excersises
void string_six()
{
    cout << "Enter a sentence : ";
    string inputText = "";
    getline(cin, inputText);

    stringstream ss(inputText);
    string s;
    int count = 0;
    while (getline(ss, s, ' '))
        count++;

    auto sfix = count == 1 ? " word." : " words.";
    cout << "\"" << inputText << "\""
         << " contains " << count << sfix;
}

void string_seven()
{
    cout << "Enter a text: ";
    string inputText = "";
    getline(cin, inputText);

    inputText.erase(remove_if(inputText.begin(), inputText.end(), not_alpha), inputText.end());

    StringToLower(inputText);
    auto reverse = StringReverse(inputText);
    auto equal = inputText.compare(reverse);

    string result = equal == 0 ? " is a palindrome" : " is not a palindrome";
    cout << inputText << result;
}
