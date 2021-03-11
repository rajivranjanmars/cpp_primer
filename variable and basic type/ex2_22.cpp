#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){

  int *ip, &r = ip;    // may cause some error for 2nd part and *ip is pointer to int
 int i, *ip = 0;   //i is int  and ip is null pointer
 int* ip, ip2;    //ip is pointer and ip2 is int
 

 return 0;
}