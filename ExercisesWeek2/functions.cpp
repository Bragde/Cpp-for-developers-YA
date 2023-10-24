#include <iostream>
#include <algorithm>

using std::reverse;
using std::string;
using std::transform;

void StringToLower(string &data)
{
    std::transform(data.begin(), data.end(), data.begin(), [](unsigned char c)
                   { return std::tolower(c); });
}

string StringReverse(string data)
{
    reverse(data.begin(), data.end());
    return data;
}
