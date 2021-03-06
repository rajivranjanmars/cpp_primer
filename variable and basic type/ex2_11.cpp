#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main()
{

    // extern int ix = 1024;    error
    int iy;        // declares and defines
    extern int iz; // declares , not defines

    return 0;
}