#include<iostream.h>
#include<conio.h>
void main()
{
	int i = 11; //Initializing value of i
	clrscr();
	cout<<"\nOriginal Value of 'i': "<<i; //display initial value of i
	cout<<"\n\nValue of '++i'(Pre-Increment): "<<++i; //current value of i is incremented by 1 at current statement, i=12
	cout<<"\n\t Current Value of 'i': "<<i;
	cout<<"\n\nValue of '--i'(Pre-Decrement): "<<--i; //current value of i which is 12 is decremented by 1 at current statement, i=11
	cout<<"\n\t Current Value of 'i': "<<i;
	cout<<"\n\nValue of 'i++'(Post-Increment): "<<i++; //current value of i which is now 11 remains same at current statement and will increment at next statement
	cout<<"\n\t Current Value of 'i': "<<i;
	cout<<"\n\nValue of 'i--'(Post-Decrement): "<<i--; //current value of i which is now 12 remains same at current statement and will decrement at next statement
	cout<<"\n\t Current Value of 'i': "<<i;
	getch();
}