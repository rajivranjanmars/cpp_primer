#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector <int> ints;
    int x;
    while (cin >> x )
        ints.push_back(x);
    
    for (const auto &k :ints)
    cout << k << endl;     
 return 0;
}