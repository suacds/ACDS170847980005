#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int ram_age, shyam_age;
	cout<<"\nEnter Age of Ram: ";
	cin>>ram_age;
	cout<<"\nEnter Age of Shyam: ";
	cin>>shyam_age;
	cout<<"\n------------------------------------------";
	cout<<"\n\nAges before swapping:";
	cout<<"\n\tAge of Ram: "<<ram_age<<"\n\tAge of Shyam: "<<shyam_age;
	ram_age = ram_age + shyam_age;
	shyam_age = ram_age - shyam_age;
	ram_age = ram_age - shyam_age;
	cout<<"\n------------------------------------------";
	cout<<"\n\nAges after swapping:";
	cout<<"\n\tAge of Ram: "<<ram_age<<"\n\tAge of Shyam: "<<shyam_age;
	getch();
}