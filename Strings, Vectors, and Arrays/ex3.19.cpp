#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;
int main(){
   

vector<int> v3(10, 42);
vector<int> v4{42,42,42,42,42,42,42,42,42,42};
vector<int> v5(10); 
for(int i = 0;i<10;i++)
v5.push_back(42);       
 return 0;
}