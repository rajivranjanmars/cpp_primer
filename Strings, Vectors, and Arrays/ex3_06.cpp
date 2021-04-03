#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){

string x;
cin >> x;
for (auto &c:x)
c='x';

cout << x << endl;
 return 0;
}