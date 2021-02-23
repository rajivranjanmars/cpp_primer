#include <iostream>
#include "Sales_item.h"
#include <string>
using namespace std;
int main(){
    Sales_item item , curr_item,total;
      
        cout << "enter 1st one item from the list" << endl;
        cin>> curr_item ;
        cout << " enter further item in the list with same isbn" << endl;
        while (cin >> item )
        {
          if(curr_item.isbn()==item.isbn())
          curr_item  =curr_item +item;
          else 
          cout<< "enter only item in the list with same isbn" << endl;
          
        }
         // in vs code re run the program to get the output
        cout << curr_item;
 return 0;
}