//WAP TO BINARY SEARCH
#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},key,low=0,high=10,mid,found=0;
	cout<<"Enter the element to search";
	cin>>key;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid] ==key)
		{
			cout<<"Element " << key <<" found at position " << mid+1;
			found=1;
			break;
		}
		else if(key < a[mid])
		{
			high = mid-1;
		}
		else
		{
			low =mid+1;
		}
	}
	if (found==0)
	{
		cout<<"Element not found";
	}
	return 0;    
}
