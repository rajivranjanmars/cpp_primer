#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){


 cout <<  'a' << "\t" <<  L'a' << "\t" << "a" << "\t" << L"a" <<endl
      << 10 << "\t" <<  10u << "\t" <<  10L << "\t" <<  10uL << "\t" <<  012 << "\t" <<  0xC << endl
      << 3.14 << "\t" <<  3.14f << "\t" <<  3.14L << endl
      << 10 << "\t" <<  10u << "\t" <<  10. << "\t" <<  10e-2 << endl;             
 return 0;
}

/*

ANSWER

A.  CHAR , ASCII ,STRING , CGANGES EVERYTHING IN ASCII THEN BINARY SIDEWISE TO HEX

B. INT , UNSIGNED INT  , LONG  , UNSIGNNED INT , OCT , HEX

C.DOUBLE ,FLOAT , LONG DOUBLE

D. INT , UNSIGNED INT , FLOAT , EXPONENTIAL FLOAT


*/