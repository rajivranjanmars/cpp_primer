#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<int> sum;
    int i;
    int t=0;
    while (t<6){
    cin >> i;
        sum.push_back(i);
        t++;}

    for (size_t i = 0; i < sum.size() / 2; i++)
        cout << sum[i] + sum[sum.size() - i] << endl;

    return 0;
}