#include<iostream.h>
#include<conio.h>
void main()
{
	float odi_avg1, odi_avg2, final_avg;
	clrscr();
	cout<<"\nEnter Details for Mithali Raj's T20 ODI Average: ";
	cout<<"\n\nEnter 1st T20 ODI Average: ";
	cin>>odi_avg1;
	cout<<"\nEnter 2nd T20 ODI Average: ";
	cin>>odi_avg2;
	final_avg = (odi_avg1 + odi_avg2) / 2;
	cout<<"\n\nFinal Average of Mithali Raj's T20 ODI is: "<<final_avg;
	getch();
}