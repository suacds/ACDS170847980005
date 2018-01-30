#include<iostream.h>
#include<conio.h>
void main()
{
	int i;
	char ch;
	char* str = "1111";
	char* pwd = NULL;
	clrscr();
	do
	{
		cout<<"\nEnter Password: ";
		cin>>pwd;
		if(*pwd == *str)
		{
			int ch2;
			cout<<"Authentication Successful..";
			cout<<"\n1. Print 1-10 Numbers";
			cout<<"\n2. Print Even Numbers From 1 To 10";
			cout<<"\nEnter Choice: ";
			cin>>ch2;
			switch(ch2)
			{
				case 1:
					for(i = 1; i <= 10; i++)
						cout<<i<<" ";
					break;
				case 2:
					for(i = 1; i <=10 ; i++)
					{
						if(i%2 == 0)
							cout<<i<<" ";
					}
					break;
				default:
					cout<<"\nInvalid Choice...";
					break;
			}
			cout<<"\nTry Again ??? (Press y/Y: YES or n/N: NO) ";
			cin>>ch;
		}
		else
		{
			cout<<"Authentication Failure...";
			cout<<"\nTry Again ??? (Press y/Y: YES or n/N: NO) ";
			cin>>ch;
		}
	}while(ch == 'y' || ch == 'Y');
}