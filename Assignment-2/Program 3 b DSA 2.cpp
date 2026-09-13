#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter n (range 1 to n): ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }
    int low = 0, high = n-1, missing = n;
    while (low <= high) 
	{
        int mid = (low + high) / 2;

        if (arr[mid] == mid+1) 
		{
            low = mid + 1;
        } else 
		{
            missing = mid+1;
            high = mid - 1;
        }
    }

    cout << "Missing number (Binary Search) = " << missing << endl;

    return 0;
}

