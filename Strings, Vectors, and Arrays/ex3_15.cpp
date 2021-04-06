#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
     vector <string> s;
    string x;
    while (getline(cin , x) )
        s.push_back(x);
    
    for (const auto &k :s)
    cout << k << endl;           
 return 0;
}