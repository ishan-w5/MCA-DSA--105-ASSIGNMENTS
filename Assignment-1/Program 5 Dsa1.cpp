//WAP TO FIND SUM OF ALL ELEMENTS OF ROW AND COLUMN OF AN ARRAY
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the number of rows and columns of an array\n";
	cin>>a>>b;
	int c[a-1][b-1];
	cout<<"\nEnter the elements:";
	for(int i=0;i<a;i++)
		for(int j=0;j<b;j++)
			cin>>c[i][j];
    int sum=0;
    for(int i=0;i<a;i++)
		for(int j=0;j<b;j++)
			sum+=c[i][j];
	cout<<"The sum of elements is: " << sum;
	return 0;
}
