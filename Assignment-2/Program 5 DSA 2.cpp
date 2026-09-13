#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter size of matrix (n x n): ";
    cin >> n;

    // (a) Diagonal Matrix
    int diag[100];
    cout << "\nEnter diagonal elements: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> diag[i];
    }
    cout << "Diagonal Matrix stored in 1D array:\n";
    for (int i = 0; i < n; i++) 
	{
        cout << diag[i] << " ";
    }
    cout << endl;

    // (b) Tri-diagonal Matrix
    int lower[100], triDiag[100], upper[100];
    cout << "\nEnter tri-diagonal elements:\n";
    cout << "Main diagonal: ";
    for (int i = 0; i < n; i++) cin >> triDiag[i];
    cout << "Lower diagonal: ";
    for (int i = 0; i < n-1; i++) cin >> lower[i];
    cout << "Upper diagonal: ";
    for (int i = 0; i < n-1; i++) cin >> upper[i];

    cout << "Tri-diagonal stored efficiently:\n";
    cout << "Lower: "; for (int i = 0; i < n-1; i++) cout << lower[i] << " ";
    cout << "\nMain: "; for (int i = 0; i < n; i++) cout << triDiag[i] << " ";
    cout << "\nUpper: "; for (int i = 0; i < n-1; i++) cout << upper[i] << " ";
    cout << endl;

    // (c) Lower Triangular Matrix
    int lowerTri[100];
    cout << "\nEnter lower triangular elements row-wise:\n";
    int idx = 0;
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j <= i; j++) 
		{
            cin >> lowerTri[idx++];
        }
    }
    cout << "Lower triangular stored in 1D array:\n";
    for (int i = 0; i < idx; i++) cout << lowerTri[i] << " ";
    cout << endl;

    // (d) Upper Triangular Matrix
    int upperTri[100];
    cout << "\nEnter upper triangular elements row-wise:\n";
    idx = 0;
    for (int i = 0; i < n; i++) 
	{
        for (int j = i; j < n; j++) 
		{
            cin >> upperTri[idx++];
        }
    }
    cout << "Upper triangular stored in 1D array:\n";
    for (int i = 0; i < idx; i++) cout << upperTri[i] << " ";
    cout << endl;

    // (e) Symmetric Matrix
    int sym[100];
    cout << "\nEnter symmetric matrix lower triangular part:\n";
    idx = 0;
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j <= i; j++) 
		{
            cin >> sym[idx++];
        }
    }
    cout << "Symmetric matrix stored in 1D array:\n";
    for (int i = 0; i < idx; i++) cout << sym[i] << " ";
    cout << endl;

    return 0;
}

