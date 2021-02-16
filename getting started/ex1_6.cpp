/*Explain whether the following program fragment is legal.
 *std::cout << "The sum of " << v1; << " and " << v2; << " is " << v1 + v2 << std::endl; 
 *
 *If the program is legal, what does it do? If the program is not legal, why not? 
 *How would you fix it?
 */

#include <iostream>

using namespace std;
int main(){
    int v1=10,v2=12,v3=15;

    // we have to take out those  ; out and write code in one line
    
          std::cout << "The sum of " << v1<< " and " << v2 << " is " << v1 + v2 << std::endl;     
 return 0;
}