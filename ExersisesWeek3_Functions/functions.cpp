#include <string>
#include <vector>
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

int findLongestWord(vector<string> words)
{
    unsigned int longestWord = 0;
    for (auto s : words)
    {
        if (s.length() > longestWord)
            longestWord = s.length();
    }
    return longestWord;
}

// "Internal" functions
bool isEven(int number) { return number % 2 == 0; }

int getLastDigit(int number) { return number % 10; }

/// @brief
/// @param number Number to get digit from.
/// @param position Declare position as 1, 10 , 100 etc.
/// @return
int getDigitInPos(int number, int position)
{
    return (number / position % 10);
}