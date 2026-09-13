//WAP to transform characters from uppercase to lower case
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str1,str2;
    char ch;
    cout << "\nEnter a character (uppercase): ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; // ASCII conversion
        cout << "Lowercase character: " << ch << endl;
    } else {
        cout << "Not an uppercase character!" << endl;
    }

    return 0;
}
