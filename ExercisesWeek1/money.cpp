#include <iostream>
// #include <list>
#include <map>

using namespace std;

void money()
{
    map<int, int> denominations{{1000, 0}, {500, 0}, {200, 0}, {100, 0}, {50, 0}, {20, 0}, {10, 0}, {1, 0}};
    // list<int> denominations{1000, 500, 200, 100, 50, 20, 10, 1};
    int totalAmount, remainder;

    cout << "Enter total amount: ";
    cin >> totalAmount;
    remainder = totalAmount;

    // Loop Map of denominations(keys) and set number(value)
    for (auto i = denominations.rbegin(); i != denominations.rend(); i++)
    {
        auto nr = remainder / i->first;
        if (nr > 0)
        {
            i->second = nr;
            remainder -= i->first * nr;
        }
    }

    // Print result
    for (auto i = denominations.rbegin(); i != denominations.rend(); i++)
    {
        if (i->second > 0)
        {
            string suffix = i->first > 10 ? " bill" : " coin";
            suffix += i->second > 1 ? "s: " : ": ";
            cout << i->first << suffix << i->second << endl;
        }
    }

    // Loop List of denomiations and print result
    // for (const auto &kv : denominations)
    // {
    //     // auto nr = remainder / denominator;
    //     // if (nr != 0)
    //     // {
    //     //     denominations[denominator] = nr
    //     //     cout << denominator << " : " << nr << endl;
    //     //     remainder -= denominator * nr;
    //     // }
    // }
}