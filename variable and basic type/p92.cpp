#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){

cout << "newline \n." << endl 
     << "horizontal tab \t ." <<endl
     << "alert (bell) \a." << endl
     << "vertical tab\v ." << endl
     << "backspace\b." <<endl   // last e deleted from backspace
     << "double quote \"." << endl
     << "backslash \\." << endl 
     << "question mark \?."<<endl 
     << "single quote \'." << endl
     << "carriage return \r." << endl
     << "formfeed \f." << endl
     << "newline \12." << endl
     << "blank \40."  << endl
     << "null \0." << endl
     << " M \115 ." << endl
     << " M \x4d." << endl;
 return 0;
}