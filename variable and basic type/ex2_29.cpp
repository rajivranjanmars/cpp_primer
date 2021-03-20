#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
    int i, *const cp;  
 int *p1, *const p2;  
 const int ic, &r = ic;  
 const int *const p3;      
 const int *p;

 i = ic;      //legal
 p1 = p3;      // illegal
 p1 = &ic;     // illegal
 p3 = &ic;     // illegal
 p2 = p1;      //illegal
 ic = *p3;     // illegal



 return 0;
}