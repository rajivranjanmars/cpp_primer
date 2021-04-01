#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){


int i = 0, &r = i;
auto a = r; 


const int ci = i, &cr = ci;
auto b = ci; // b is an int (top-level const in ci is dropped)
auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
auto d = &i; // d is an int*(& of an int object is int*)
auto e = &ci; 

const auto f = ci; 

auto &g = ci; // g is a const int& that is bound to ci
const auto &j = 42; 

auto k = ci, &l = i; // k is int; l is int&
auto &m = ci, *p = &ci; // m is a const int&;p is a pointer to const int

cout << a << " " << b << " " << c << " " << d << " " << e << " " << g <<endl;

a = 42; b = 42; c = 42;
//d = 42; e = 42; g = 42;   all 3 are wrong
cout << a << " " << b << " " << c << " " << d << " " << e << " " << g <<endl ;



 return 0;
}