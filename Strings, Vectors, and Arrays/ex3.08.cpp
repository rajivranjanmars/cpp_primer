#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){

 string x;
 cin >>x;
 cout << x << endl;




 size_t a=0;
 while(a<x.size()){
     x[a]='x';
     ++a;
 } 
 cout << x <<endl; 

   for (auto a = 0; a < x.size(); ++a)
   {
       x[a]='x';
   }

     cout << x << endl;      
 return 0;
}
