#include <iostream>
#include "Sales_item.h"
int main()
{
Sales_item item1, item2;
std::cin >> item1 >> item2; // read a pair of transactions
std::cout << item1 + item2 << std::endl; // print their sum
// output format is      isbn  no  ,  no. of books sold , total price   , average price  
return 0;
}
