//What does the following for loop do? What is the
/*final value of sum?
* int sum = 0;
* for (int i = -100; i <= 100; ++i)
* sum += i;
*/
#include <iostream>
using namespace std;
int main(){
      int sum = 0;
for (int i = -100; i <= 100; ++i)
{
    sum += i;  
}

cout << sum;

 return 0;
}
//answer 0