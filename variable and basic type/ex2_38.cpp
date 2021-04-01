#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){

int i;
auto a1 = i;     // int
decltype(i) d1;  // int
  // Different type

int i, &j = i;
auto a2 = j;     // int
decltype(j) d2;  // int &

const int i;
auto a3 = i;          // int
decltype(i) d3 = 42;  // const int


 return 0;
}