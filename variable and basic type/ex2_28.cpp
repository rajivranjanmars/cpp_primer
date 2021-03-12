#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
  int i, *const cp;  // illegal non initialised const
 int *p1, *const p2;  // illegal non initialised const
 const int ic, &r = ic;  // illegal non initialised const
 const int *const p3;      // illegal non initialised const
 const int *p; // legal
             
 return 0;
}