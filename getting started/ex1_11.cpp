// Write a program that prompts the user for two integers. Print each number in the range specified by those two integers.

#include <iostream>
using namespace std;

int main ()
{
    int num1, num2;

    std:: cin >> num1 >> num2; 

    if (num1>num2)
    {      int t;
        t=num1;
        num1=num2;         
        num2=t;
    }
       

    while (num1<=num2)
    {
        std::cout << num1 << endl ;
        num1=num1+1;
    }
     
return 0;

}