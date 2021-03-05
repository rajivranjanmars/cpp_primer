#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
 std::string global_str;
int global_int;
 void glo();
int main()
{
int local_int;
std::string local_str;
cout << local_int << endl << local_str << endl; // int= garbage , string is empty
glo();
}
void glo(){
    cout << global_int << endl << global_str << endl; // int =0; string is empty
}