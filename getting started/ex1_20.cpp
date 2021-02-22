#include <iostream>
#include "Sales_item.h"
#include <string>

using namespace std;
int main(){

Sales_item item;
while (std::cin>> item)
{
    cout << item << endl;
}


 return 0;
}