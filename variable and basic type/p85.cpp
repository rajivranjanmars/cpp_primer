#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){

    bool b = 42; // b is trueint i = b; // i has value 1
    int i = 3.14; // i has value 3
    double pi = i; // pi has value 3.0
    unsigned char c = -1; // assuming 8-bit chars, c has value 255
    signed char c2 = 256; // assuming 8-bit chars, the value of c2 is undifined

    cout << "b= " << b << endl ;
    cout << "i= " << i << endl ;
    cout << "pi= " << pi << endl ;
    cout << "c2= " << c2 << endl ;
    cout << "c= " << c << endl ;
 return 0;
}