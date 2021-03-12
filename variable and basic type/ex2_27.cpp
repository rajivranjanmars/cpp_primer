#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main()
{
int i2;
    int i = -1, &r = 0;   // illegal because initial value of reference to non-const must be an lvalue
    int *const p2 = &i2;   // legal if i2 is predeclared
    const int i = -1, &r = 0;   // legal as r is refrence to a const
    const int *const p3 = &i2;   //   legal
    const int *p1 = &i2;    // legal
    const int &const r2;     //  const needs to be initialised
    const int i2 = i, &r = i;    // legal  

    return 0;
}