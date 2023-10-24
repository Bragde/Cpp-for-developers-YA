#if !defined(_FUNC_H_)
#define _FUNC_H_

#include <string>

using std::string;

string getAgeMessage(int year);
int countNumbers(string input);
string generateName(string firstName, string lastName);
bool isWoman(int pnr);
int findLongestWord(vector<string> words);
bool isEven(int number);
int getLastDigit(int number);

#endif