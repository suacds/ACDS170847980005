#include<iostream.h>
#include<conio.h>
void add()
{
	int r1,r2,r3,i1,i2,i3;
	cout<<"\nEnter 1st Complex Number: ";
	cout<<"\nEnter Real Part: ";
	cin>>r1;
	cout<<"Enter Imaginary Part: ";
	cin>>i1;
	cout<<"\nEnter 2nd Complex Number: ";
	cout<<"\nEnter Real Part: ";
	cin>>r2;
	cout<<"Enter Imaginary Part: ";
	cin>>i2;
	r3 = r1 + r2;
	i3 = i1 + i2;
	cout<<"\nAddition of Given Complex Numbers: ";
	cout<<endl<<"("<<r3<<") + ("<<i3<<")i";
}
void sub()
{
	int r1,r2,r3,i1,i2,i3;
	cout<<"\nEnter 1st Complex Number: ";
	cout<<"\nEnter Real Part: ";
	cin>>r1;
	cout<<"Enter Imaginary Part: ";
	cin>>i1;
	cout<<"\nEnter 2nd Complex Number: ";
	cout<<"\nEnter Real Part: ";
	cin>>r2;
	cout<<"Enter Imaginary Part: ";
	cin>>i2;
	r3 = r1 - r2;
	i3 = i1 - i2;
	cout<<"\nSubtraction of Given Complex Numbers: ";
	cout<<endl<<"("<<r3<<") + ("<<i3<<")i";
}
void mul()
{
	int r1,r2,r3,i1,i2,i3;
	cout<<"\nEnter 1st Complex Number: ";
	cout<<"\nEnter Real Part: ";
	cin>>r1;
	cout<<"Enter Imaginary Part: ";
	cin>>i1;
	cout<<"\nEnter 2nd Complex Number: ";
	cout<<"\nEnter Real Part: ";
	cin>>r2;
	cout<<"Enter Imaginary Part: ";
	cin>>i2;
	r3 = r1 * r2;
	i3 = i1 * i2;
	cout<<"\nMultiplication of Given Complex Numbers: ";
	cout<<endl<<"("<<r3<<") + ("<<i3<<")i";
}
void div()
{
	int r1,r2,r3,i1,i2,i3;
	cout<<"\nEnter 1st Complex Number: ";
	cout<<"\nEnter Real Part: ";
	cin>>r1;
	cout<<"Enter Imaginary Part: ";
	cin>>i1;
	cout<<"\nEnter 2nd Complex Number: ";
	cout<<"Enter Real Part: ";
	cin>>r2;
	cout<<"\nEnter Imaginary Part: ";
	cin>>i2;
	r3 = r1 / r2;
	i3 = i1 / i2;
	cout<<"\nDivision of Given Complex Numbers: ";
	cout<<endl<<"("<<r3<<") + ("<<i3<<")i";
}
void main()
{
	int ch;
	char ch2;
	clrscr();
	do
	{
		cout<<"\n1. Add Two Complex Numbers";
		cout<<"\n2. Subtract Two Complex Numbers";
		cout<<"\n3. Multiply Two Complex Numbers";
		cout<<"\n4. Divide Two Complex Numbers";
		cout<<"\nEnter Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:	add();
				getch();
				break;
			case 2: sub();
				getch();
				break;
			case 3: mul();
				getch();
				break;
			case 4: div();
				getch();
				break;
			default:
				cout<<"\nInvalid Choice...";
				break;
		}
		cout<<"\nTry Again??? (Press y/Y - YES | n/N - NO): ";
		cin>>ch2;
	}while(ch2 == 'y' || ch2 == 'Y');
}