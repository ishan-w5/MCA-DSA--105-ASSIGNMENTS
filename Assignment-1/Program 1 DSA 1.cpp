#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n=0;
	int choice,i,pos,value,search,found;
	do
	{
		cout<<"--MENU--\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT";
		cout<<"\n\n\n\tENTER YOUR CHOICE:";
		cin>>choice;
		switch (choice)
		{
			case 1:
				cout<<"Enter the number of elements: ";
				cin>>n;
				cout<<"Enter " << n <<" number of elements: ";
				
				for(i=0;i<n;i++)
				{
					cin>>a[i];
				}
		        cout<<"Array Created Successfully\n";
		        break;
		    case 2:
		    	if(n==0)
		    	{
		    		cout<<"Array is empty!\n";
				}
				else
				{
					cout<<"Array elements:\n";
					for(i=0;i<n;i++)
					{
						cout<<a[i] << "\n";
					}
					cout<< endl;
				}
				break;
			case 3: 
                if (n >= 100) 
				{
                    cout << "Array is full!\n";
                } 
				else 
				{
                    cout << "Enter position (0-based index): ";
                    cin >> pos;
                    cout << "Enter value: ";
                    cin >> value;

                    if (pos < 0 || pos > n) 
					{
                        cout << "Invalid position!\n";
                    } else 
					{
                        for (i = n; i > pos; i--) 
						{
                            a[i] = a[i - 1];
                        }
                        a[pos] = value;
                        n++;
                        cout << "Element inserted successfully.\n";
                    }
                }
                break;
            case 4: 
                if (n == 0) 
				{
                    cout << "Array is empty!\n";
                } 
				else 
				{
                    cout << "Enter position (0-based index): ";
                    cin >> pos;

                    if (pos < 0 || pos >= n) 
					{
                        cout << "Invalid position!\n";
                    } 
					else 
					{
                        for (i = pos; i < n - 1; i++) 
						{
                            a[i] = a[i + 1];
                        }
                        n--;
                        cout << "Element deleted successfully.\n";
                    }
                }
                break;
            case 5: 
                cout << "Enter element to search: ";
                cin >> search;
                found = -1;
                for (i = 0; i < n; i++) 
				{
                    if (a[i] == search) 
					{
                        found = i;
                        break;
                    }
                }
                if (found != -1) 
				{
                    cout << "Element found at position " << found << endl;
                }
				 else 
				{
                    cout << "Element not found.\n";
                }
                break;
			case 6: 
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
		}	
		     
	} while (choice!=6);
	return 0;
}

