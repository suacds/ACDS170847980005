#include<iostream.h>
#include<conio.h>
float add(float a, float b)
{
	float c;
	c = a + b;
	return c;
}
struct calc
{
	float a, b;
};
void main()
{
	calc c;
	clrscr();
	cout<<"\nSample Program Using Structure and Function...";
	cout<<"\nEnter Any Two Numbers: ";
	cin>>c.a>>c.b;
	cout<<"\nGiven Numbers Are:\nA: "<<c.a<<"\nB: "<<c.b;
	cout<<"\nAddition: A + B = "<<add(c.a,c.b);
	getch();
}