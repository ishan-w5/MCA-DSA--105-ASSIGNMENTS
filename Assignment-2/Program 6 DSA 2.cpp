#include <iostream>
using namespace std;

struct Term {
    int row, col, val;
};

int main() 
{
    int m, n, t;
    cout << "Enter rows and columns of matrix: ";
    cin >> m >> n;
    cout << "Enter number of non-zero terms: ";
    cin >> t;

    Term A[50];
    cout << "Enter triplet (row col value):\n";
    for (int i = 0; i < t; i++) 
	{
        cin >> A[i].row >> A[i].col >> A[i].val;
    }
    cout << "\nTranspose of Matrix (Triplet form):\n";
    for (int i = 0; i < t; i++) 
	{
        cout << A[i].col << " " << A[i].row << " " << A[i].val << endl;
    }
    int m2, n2, t2;
    cout << "\nEnter rows and columns of second matrix: ";
    cin >> m2 >> n2;
    cout << "Enter number of non-zero terms: ";
    cin >> t2;

    Term B[50];
    cout << "Enter triplet (row col value):\n";
    for (int i = 0; i < t2; i++) {
        cin >> B[i].row >> B[i].col >> B[i].val;
    }

    if (m != m2 || n != n2) {
        cout << "Addition not possible (dimension mismatch)\n";
    } else {
        cout << "\nAddition Result (Triplet form):\n";
        int i = 0, j = 0;
        while (i < t && j < t2) {
            if (A[i].row == B[j].row && A[i].col == B[j].col) {
                cout << A[i].row << " " << A[i].col << " " << A[i].val + B[j].val << endl;
                i++; j++;
            } else if (A[i].row < B[j].row || (A[i].row == B[j].row && A[i].col < B[j].col)) {
                cout << A[i].row << " " << A[i].col << " " << A[i].val << endl;
                i++;
            } else {
                cout << B[j].row << " " << B[j].col << " " << B[j].val << endl;
                j++;
            }
        }
        while (i < t) {
            cout << A[i].row << " " << A[i].col << " " << A[i].val << endl;
            i++;
        }
        while (j < t2) {
            cout << B[j].row << " " << B[j].col << " " << B[j].val << endl;
            j++;
        }
    }
    if (n != m2) {
        cout << "\nMultiplication not possible (dimension mismatch)\n";
    } else {
        cout << "\nMultiplication Result (Triplet form):\n";
        for (int i = 0; i < t; i++) {
            for (int j = 0; j < t2; j++) {
                if (A[i].col == B[j].row) {
                    cout << A[i].row << " " << B[j].col << " " << A[i].val * B[j].val << endl;
                }
            }
        }
    }

    return 0;
}

