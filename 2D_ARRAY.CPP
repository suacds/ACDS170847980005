#include<iostream.h>
#include<conio.h>
int i,j;
void input(int a, int b, int arr[100][100])
{
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<"Enter Element at arr["<<i<<"]["<<j<<"]: ";
			cin>>arr[i][j];
		}
	}
}

void display(int a, int b, int arr[100][100])
{
	if(a == 0 && b == 0)
		cout<<"\nMatrix is Empty...";
	else
	{
		cout<<"\nMatrix Elements Are:\n";
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
				cout<<"\t"<<arr[i][j]<<" ";
			cout<<endl;
		}
	}
}
void main()
{
	int a,b,i,j,arr[100][100];
	int ch;
	a = b = 0;
	char ch2;
	clrscr();
	do
	{
		cout<<"\n1. Input Elements In Matrix";
		cout<<"\n2. Display Elements Of Matrix";
		cout<<"\nEnter Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter Number of Rows: ";
				cin>>a;
				cout<<"\nEnter Number of Columns: ";
				cin>>b;
				input(a,b,arr);
				cout<<"\nMatrix Elements Inserted Successfully...";
				break;
			case 2:
				display(a,b,arr);
				break;
			default:
				cout<<"\nInvalid Choice...";
				break;
		}
		cout<<"\nTry Again ??? (Press y/Y - YES | n/N - NO): ";
		cin>>ch2;
	}while(ch2 == 'y' || ch2 == 'Y');
}