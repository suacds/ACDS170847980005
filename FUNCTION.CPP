#include<iostream.h>
#include<conio.h>
int add(int a, int b)
{
	int c;
	c = a + b;
	return c;
}
int sub(int a, int b)
{
	int c;
	c = a - b;
	return c;
}
int div(int a, int b)
{
	int c;
	c = a / b;
	return c;
}
int mul(int a, int b)
{
	int c;
	c = a * b;
	return c;
}
void main()
{
	int a,b;
	clrscr();
	cout<<"\nEnter Any Two Numbers: ";
	cin>>a>>b;
	cout<<"\nAddition: "<<add(a,b);
	cout<<"\nSubtraction: "<<sub(a,b);
	cout<<"\nDivision: "<<div(a,b);
	cout<<"\nMultiplication: "<<mul(a,b);
	getch();
}