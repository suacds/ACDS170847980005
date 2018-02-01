#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int *a, *b, *temp;
	cout<<"\nEnter Any Two Numbers To Be Swapped: ";
	cin>>*a>>*b;
	cout<<"\nNumbers Before Swapping: ";
	cout<<"\nA : "<<*a;
	cout<<"\nB : "<<*b;
	temp = a;
	a = b;
	b = temp;
	cout<<"\nNumbers After Swapping: ";
	cout<<"\nA : "<<*a<<"\nB : "<<*b;
	getch();
}