#include <iostream>
using namespace std;
// using declaration; when we use the name cin, we get the one from the

int main()
{
int i;
cin >> i; // ok: cin is a synonym for std::cin
cout << i; // error: no using declaration; we must use the full name
std::cout << i; // ok: explicitly use cout from namepsace std
return 0;
}