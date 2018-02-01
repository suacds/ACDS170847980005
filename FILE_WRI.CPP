#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	ofstream file;
	char str[100] = "The desire to learn should be stronger than the desire to live";
	clrscr();
	cout<<"\nOpening File...";
	file.open("OUT.TXT");
	cout<<"\nFile Is Opened...";
	file<<str;
	cout<<"\nData Successfully Written On File...";
	cout<<"\nClosing File...";
	file.close();
	cout<<"\nFile is Closed...";
	getch();

}