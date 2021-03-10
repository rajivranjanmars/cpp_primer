#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
 int i = 42;
        // i is ddeclared and initialised with value of 42
int* p1 = &i;
    // pointer p1 is declared and initialised with value at  adress of i
*p1 =p1 *p1;    //      it will genarate error because p1  is pointer    
 return 0;
}