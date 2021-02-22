/*    Write a program that reads two Sales_item
 *    objects that have the same ISBN and produces their sum.
*/
#include <iostream>
#include "Sales_item.h"
#include <string>
using namespace std;
int main(){

Sales_item item1, item2;
cin >> item1 >> item2;

if (item1.isbn() == item2.isbn() )
{
 cout << item1+ item2 << endl;
}
else
cerr << " both the book must have same isbn number." << endl;

              
  return 0;
}