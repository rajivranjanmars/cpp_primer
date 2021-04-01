#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){

 string a , b;
 cin>> a >>b;
 if (a>b)
 cout << "a is bigger than b" << endl;
 else 
 cout << "b is bigger than a" << endl;

  if (a.length()==b.length())
  cout << "both are equal" << endl;
  else if(a.length()>b.length())
  cout << "length of a is more than b" << endl;
    else
    cout << "length of a is less than b" << endl;
 return 0;
}