#include <iostream>
using namespace std;

int main() 
{
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }
    cout << "Enter K (number of positions to rotate): ";
    cin >> k;
    k = k % n;
    cout << "Left Rotation by " << k << " positions: ";
    for (int i = k; i < n; i++) {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Right Rotation by " << k << " positions: ";
    for (int i = n - k; i < n; i++) {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n - k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

