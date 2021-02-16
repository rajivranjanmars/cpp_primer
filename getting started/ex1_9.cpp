//: Write a program that uses a while to sum the numbers from 50 to 100.


#include <iostream> 

int main()
 { 
     int sum = 0, val = 50;
      // keep executing the while as long as val is less than or equal to 10 
      while (val <= 100) 
      {
           sum += val;// assigns sum + val to sum
            ++val; // add 1 to val
     }
     std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl; 
     return 0;
 }