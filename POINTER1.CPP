#include<iostream.h>
#include<conio.h>
void main()
{
	int a = 24;
	int *ptr;
	int val;
	clrscr();
	ptr = &a;
	val = *ptr;
	cout<<"\nAddress of Declared Variable: 'A': "<<&a;
	cout<<"\n\nAddress of Declared Pointer Variable 'Ptr': "<<&ptr;
	cout<<"\n\nValue Stored at Location \""<<&ptr<<"\" of Pointer Variable 'Ptr': "<<val;
	getch();
}