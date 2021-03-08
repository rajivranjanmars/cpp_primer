#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
    int ival = 1.01;  //ival will be truncated
   // int &rval1 = 1.01;   // reference must be object
    int &rval2 = ival;   // refrence is an int object
  //  int &rval3;   // refremce must refer to an object

 return 0;
}
//   a  and c are correct