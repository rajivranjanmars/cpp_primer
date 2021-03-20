#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
    int i;
    const int v2 = 0; int v1 = v2;   //lowlevel
int *p1 = &v1, &r1 = v1;    //lowlevel
const int *p2 = &v2, *const p3 = &i, &r2 = v2;   //highlevel




 return 0;
}