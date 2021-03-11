#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
      const int buf; // comnst int always need to initialised
 int cnt = 0;   // correct
 const int sz = cnt;  //correct 
 ++cnt;       // cnt is not const so it can be changed
  ++sz;      // sz is const so can not be changed

 return 0;
}