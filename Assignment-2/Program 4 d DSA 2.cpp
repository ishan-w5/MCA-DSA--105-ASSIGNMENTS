//WAP to sort string in alphabetical order
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str1,str2;
    int n;
    cout << "\nEnter number of strings to sort: ";
    cin >> n;
    cin.ignore(); // clear newline
    string arr[50];
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }
    sort(arr, arr + n);
    cout << "Strings in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return o;
}
