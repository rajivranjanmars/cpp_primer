#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){

 int a =42;
 int*s=&a;
 cout << "value of  *s before change = " << *s << endl;
 
 a=a*a;
 cout << "value of  *s after change = " << *s << endl ;

 return 0;
}