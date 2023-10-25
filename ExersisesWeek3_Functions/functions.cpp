#include <string>
#include <vector>
#include <tuple>
#include "functions.h"

using std::string;
using std::vector;

// Public functions
string getAgeMessage(int year)
{
    if (year < 1973)
        return "No worry, you are still young.";
    if (year == 1973)
        return "You are born he same year as Peter Forsberg";
    return "You are much younger than the C programming language";
}

int countNumbers(string input)
{
    auto count = 0;
    for (auto ch : input)
        if (isdigit(ch))
            count++;
    return count;
}

string generateName(string firstName, string lastName)
{
    return firstName + " " + lastName;
}

bool isWoman(long long pnr)
{
    auto digit = getDigitInPos(pnr, 10);
    return isEven(digit);
}

// Returns the longest word and its length from a collection
tuple<string, unsigned int> getLongestWord(vector<string> words)
{
    unsigned int length = 0;
    string word = "";
    for (auto s : words)
    {
        if (s.length() > length)
        {
            length = s.length();
            word = s;
        }
    }
    return make_tuple(word, length);
}

// Return true if number is even.
bool isEven(int number) { return number % 2 == 0; }

// Returns the last digit in number.
int getLastDigit(int number) { return number % 10; }

// Returns the digit in a given position from number.
// Declare the position as 100, 10, 1 etc.
int getDigitInPos(int number, int position)
{
    return (number / position % 10);
}