#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){

 int a = 3, b = 4;
 decltype(a) c = a;
 decltype(a = b) d = a;


 return 0;
}