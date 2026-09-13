//WAP to count number of distinct elements in an array
#include<iostream>
using namespace std;
int main()
{
	int n,total=0;
	cout<<"Enter the length of the array:\n";
	cin>>n;
	cout<<"\nEnter " << n << " elements:";
	int a[n-1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	} 
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				break;
			}	
		}
		if(j==i)
			{
			total=total+1;
		    }
	}
	cout<<"Total number of unique elemets is: "<< total;
	return 0;
}
