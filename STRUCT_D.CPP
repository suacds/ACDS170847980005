#include<iostream.h>
#include<conio.h>
struct college
{
	char name[20];
	int id;
	char city[10];
}c[3];
struct university
{
	char name[50];
	int rank;
}u[3];
void main()
{
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		cout<<"\nPlease Enter Details for College "<<i+1<<": ";
		cout<<"\nName of College: ";
		cin>>c[i].name;
		cout<<"ID of college \""<<c[i].name<<"\": ";
		cin>>c[i].id;
		cout<<"City: ";
		cin>>c[i].city;
		cout<<"University of college \""<<c[i].name<<"\": ";
		cin>>u[i].name;
		cout<<"Rank of University \""<<u[i].name<<"\": ";
		cin>>u[i].rank;

	}
	clrscr();
	cout<<"\nGiven Information...";
	cout<<"\n-------------------------------------------------------------";
	cout<<"\nCollege Name\tCollege ID\tCity\tUniversity\tRank";
	for(i=0;i<3;i++)
	{
		cout<<endl<<c[i].name<<"\t\t"<<c[i].id<<"\t\t"<<c[i].city<<"\t\t";
		cout<<u[i].name<<"\t"<<u[i].rank;

	}
	cout<<"\n-------------------------------------------------------------";
	getch();
}