#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
       const string s = "Keep out!";
for (auto &c : s) { /* ... */ }       
 return 0;
}