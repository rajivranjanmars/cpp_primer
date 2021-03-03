#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
       
    cout << "a.\t" << "Who goes with F\145rgus?\012" << endl  //string with oct and null and newline 
         << "b.\t" << 3.14e1L << endl  // exponent
   //    << "c.\t" <<  1024f <<endl    // comes as error as 1024 is int 
         << "d.\t" << 3.14L << endl;   // long double




 return 0;
}