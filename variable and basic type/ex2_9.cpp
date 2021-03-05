#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
       //     std::cin >> int input_value;   // illegal
int i = { 3.14 };    // illegal due to trunkation
int wage;       
double salary = wage = 9999.99;  //legal if wage is declared before
int j= 3.14;    //legal
return 0;
}    