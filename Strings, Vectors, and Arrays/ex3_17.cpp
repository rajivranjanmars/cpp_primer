#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> str;
    string x;
    for (int t = 0; t < 10; t++)
    {
        cin >> x;
        str.push_back(x);
    }
    for (int i = 0; i < 10; i++)
    {
        for (auto &c : str[i])
            cout << toupper(c) << endl;
    }

    return 0;
}