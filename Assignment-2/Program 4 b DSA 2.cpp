//WAP to reverse a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	string rev = str1; // copy
    reverse(rev.begin(), rev.end());
    cout << "Reversed String (first string): " << rev << endl;
}
