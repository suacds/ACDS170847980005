#include<iostream.h>
#include<conio.h>
void main()
{
	float amt,gst,final_amt;
	float rate = 18;
	clrscr();
	cout<<"\nEnter Amount of Good / Product: ";
	cin>>amt;
	gst = (amt * rate) / 100;
	cout<<"\nEntered Amount: "<<amt;
	cout<<"\nCalculated GST For Given Amount Of Good / Product: "<<gst;
	final_amt = amt + gst;
	cout<<"\nAmount of Good / Product After Including GST: "<<final_amt;
	getch();

}