#include<iostream.h>
#include<conio.h>
struct student
{
	int roll_no;
	char name[10];
	int marks[3];
}s[10];
void main()
{
	int i,j;
	clrscr();
	for(i=0;i<10;i++)
	{
		cout<<"\nEnter Details for Student "<<i+1<<": \n";
		cout<<"\tEnter Roll No: ";
		cin>>s[i].roll_no;
		cout<<"\tEnter Name: ";
		cin>>s[i].name;
		for(j=0;j<3;j++)
		{
			cout<<"\tEnter Marks for Subject "<<j+1<<": ";
			cin>>s[i].marks[j];
		}
	}
	cout<<"\n\nCalculating Results...";
	cout<<"\nStudents Who Have Failed In More Than One Subject Are:\n";
	cout<<"\n\tROLL NO\tNAME";
	for(i=0;i<10;i++)
	{
		if((s[i].marks[0] < 40 && s[i].marks[1] < 40) || (s[i].marks[0] < 40 && s[i].marks[2] < 40) || (s[i].marks[1] < 40 && s[i].marks[2] < 40))
			cout<<"\n\t"<<s[i].roll_no<<"\t"<<s[i].name;
	}
	getch();
}