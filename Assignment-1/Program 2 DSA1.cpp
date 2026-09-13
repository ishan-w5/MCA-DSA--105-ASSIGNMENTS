//WAP TO REMOVE DUPLICATE ELEMENTS FROM AN ARRAY AND AFTER DELETION THE ARRAY SHOULD ONLY CONTAIN UNIQUE ELEMENTS
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the length of the array:\n";
	cin>>a;
	int b[a-1];
	cout<<"\nEnter the elements of the array:\n";
	for (int i=0;i<a;i++)
		cin>>b[i];
	for(int i=0;i<a;i++)
		for(int j=i+1;j<a;j++)	
			if(b[i] == b[j])
	     
			{
				for(int k=j;k<a-1;k++)
					b[k]=b[k+1];
				a--;
				j--;
			}
	cout<<"The elements of array after removal of duplicate elements is:\n";
	for(int i=0;i<a;i++)
		cout<<b[i] << "\n";
	return 0;
}
