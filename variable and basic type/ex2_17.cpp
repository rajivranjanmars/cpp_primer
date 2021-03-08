/*#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){

 int i, &ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;

 return 0;
}*/
#include <iostream>
using namespace std;
class S
{
   static int i;
   public:
       static void init(int x)
       {
          i = x;
       }
       void show()
       {
          cout <<i;
       }
};

int S::i;
int main()
{
   S::init(100); //initialize static variable i before creating object
   S x;
   x.show();
   return 0;
}