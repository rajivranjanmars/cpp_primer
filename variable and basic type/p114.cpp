#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){

int ip1, ip2; // both ip1 and ip2 are pointers to int
double dp, *dp2; // dp2 is a pointer to double; dp is a double

cout << ip1 << endl << ip2 << endl << dp << endl<< *dp2 <<endl << dp2 << endl ;


int ival = 42;
int *p = &ival; // p holds the address of ival; p is a pointer to ival

cout << ip1 << endl << ip2 << endl << dp << endl<< *dp2 <<endl << dp2 << endl ;

double dval;
double *pd = &dval; // ok: initializer is the address of a double
double *pd2 = pd; // ok: initializer is a pointer to double
//int *pi = pd; // error: types of pi and pd differ
//pi = &dval; // error: assigning the address of a double to a pointer to int









 return 0;
}