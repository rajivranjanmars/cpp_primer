#include <iostream>
int main()
{
int sum = 0, value = 0;
/*
*If we give this program the input
*3 4 5 6
*then our output will be
*Sum is: 18
*/
// read until end-of-file, calculating a running total of all values read
while (std::cin >> value)
sum += value; // equivalent to sum = sum + value
std::cout << "Sum is: " << sum << std::endl;
return 0;
}

//in vs code re run the file to get the output 
