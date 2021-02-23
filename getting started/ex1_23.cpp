#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item curr_item, item;
    int count=1;
    cin >> curr_item;

    while( cin >> item)
    {
        if( item.isbn()== curr_item.isbn()){
             
             count ++;
        }
        else 
        { 
              cout<< "the book of isbn " << curr_item.isbn() << " is used in transaction " << count  << " times "<< endl;
              count=1;
              curr_item=item;
        }

    }



}


