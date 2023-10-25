#if !defined(_FUNC_H_)
#define _FUNC_H_

#include <string>
#include <vector>
using namespace std;

string getAgeMessage(int year);
int countNumbers(string input);
string generateName(string firstName, string lastName);
bool isWoman(long long pnr);
tuple<string, unsigned int> getLongestWord(vector<string> words);

bool isEven(int number);
int getLastDigit(int number);
int getDigitInPos(int number, int position);

#endif