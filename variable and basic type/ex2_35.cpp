#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){

const int i = 42;
auto j = i; const auto &k = i; auto *p = &i;
const auto j2 = i, &k2 = i;

  

 return 0;
}