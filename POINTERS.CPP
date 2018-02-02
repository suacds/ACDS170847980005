#include<iostream.h>
#include<conio.h>
void display(int a, int b)
{
	cout<<"\nAddition: "<<a+b;
	cout<<"\nSubtraction: "<<a-b;
	cout<<"\nMultiplication: "<<a*b;
	cout<<"\nDivision: "<<a/b;
}
void main()
{
	int *a, *b;
	clrscr();
	cout<<"\nEnter Any Two Integer Numbers: ";
	cin>>*a>>*b;
	cout<<"A = "<<*a<<" At Location '"<<&a<<"\nB = "<<*b<<" At Location '"<<&b;
	display(*a,*b);
	getch();
}