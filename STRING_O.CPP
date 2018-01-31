#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[10];
	char str2[10];
	char str3[10];
	int len,ch;
	char ch2;
	clrscr();
	do
	{
		cout<<"\n1. Find Length and Reverese of String";
		cout<<"\n2. Compare Two Strings";
		cout<<"\n3. Concatinate Two Strings";
		cout<<"\n4. Find Lower/Upper Case of String";
		cout<<"\nEnter Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\n---Find Length and Reverse of String---";
				cout<<"\nEnter String: ";
				cin>>str1;
				cout<<"\nEntered String Is: "<<str1;
				len = strlen(str1);
				cout<<"\nLength of Entered String Is: "<<len;
				cout<<"\nReverse of Entered String Is: "<<strrev(str1);
				break;
			case 2:
				cout<<"\n---Compare Two Strings---";
				cout<<"\nEnter String1: ";
				cin>>str1;
				cout<<"\nEnter String2: ";
				cin>>str2;
				if(strcmp(str1,str2) == 0)
					cout<<"\n\tBoth Strings Are Equal...";
				else
					cout<<"\n\tBoth Strings Are Not Equal...";
				break;

			case 3:
				cout<<"\n---Concatinate Two Strings---";
				cout<<"\nEnter String1: ";
				cin>>str1;
				cout<<"\nEnter String2: ";
				cin>>str2;
				cout<<"\nString 1: "<<str1<<"\nString 2: "<<str2;
				cout<<"\nConcatination: "<<strcat(str1,str2);
				break;

			case 4:
				cout<<"\n---Find Lower/Upper Case of String---";
				cout<<"\nEnter String: ";
				cin>>str1;
				cout<<"\nLower Case: "<<strlwr(str1);
				cout<<"\nLower Case: "<<strupr(str1);
				break;
			default:
				cout<<"\nPlease Enter Valid Choice...";
				break;
		}
		cout<<"\nTry Again??? (Press y/Y - YES | n/N - NO): ";
		cin>>ch2;
	}while(ch2 == 'y' || ch2 == 'Y');
}