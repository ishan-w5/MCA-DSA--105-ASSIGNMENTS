//WAP to delete vowels from a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
    string noVowels = str1;
    string vowels = "AEIOUaeiou";
    for (int i = 0; i < noVowels.size(); i++) {
        if (vowels.find(noVowels[i]) != string::npos) {
            noVowels.erase(i, 1);
            i--; // adjust index after erase
        }
    }
    cout << "String after deleting vowels: " << noVowels << endl;
    return 0;
}
