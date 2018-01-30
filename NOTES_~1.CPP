#include <iostream.h>
#include<conio.h>
void main()
{
	int amt;
	int note_100, note_50, note_20, note_10, note_5, note_2, note_1;
	note_100 = note_50 = note_20 = note_10 = note_5 = note_2 = note_1 = 0;
	clrscr();
	cout<<"\nEnter Amount:  ";
	cin>>amt;
	if(amt >= 100)
	{
		note_100 = amt/100;
		amt -= note_100 * 100;
	}
	if(amt >= 50)
	{
		note_50 = amt/50;
		amt -= note_50 * 50;
	}
	if(amt >= 20)
	{
		note_20 = amt/20;
		amt -= note_20 * 20;
	}
	if(amt >= 10)
	{
		note_10 = amt/10;
		amt -= note_10 * 10;
	}
	if(amt >= 5)
	{
		note_5 = amt/5;
		amt -= note_5 * 5;
	}
	if(amt >= 2)
	{
		note_2 = amt /2;
		amt -= note_2 * 2;
	}
	if(amt >= 1)
	{
		note_1 = amt;
	}
	cout<<"\nTotal Number Of Notes For Given Amount: ";
	cout<<"\n100 :\t"<<note_100;
	cout<<"\n50  :\t"<<note_50;
	cout<<"\n20  :\t"<<note_20;
	cout<<"\n10  :\t"<<note_10;
	cout<<"\n5   :\t"<<note_5;
	cout<<"\n2   :\t"<<note_2;
	cout<<"\n1   :\t"<<note_1;
	getch();
}