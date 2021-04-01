#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class Sales_data{
    public:
string bookNo;
unsigned int units_sold;
int bookCost;
 double revenue(){
    return units_sold *bookCost;
}
};


int main(){
     Sales_data s1;
     s1.bookNo =123;
     s1.units_sold =5;
     s1.bookCost =3;
     cout << s1.revenue() << endl;         
 return 0;
}