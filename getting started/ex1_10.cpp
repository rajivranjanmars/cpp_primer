//In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1. Use the decrement operator to write a while that prints the numbers from ten down to zero.


#include <iostream>
using namespace std;

int main ()
{
    int i =10;
    
    while (i>=0)
    {
        std::cout << i << endl ;
        i--;
    }
     
return 0;

}