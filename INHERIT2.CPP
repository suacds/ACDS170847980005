#include<iostream.h>
#include<conio.h>
class employee
{
	public:
		int e_id;
		char name[20];
		void e_accept()
		{
			cout<<"Enter Employee ID:";
			cin>>e_id;
			cout<<"Enter Employee Name:";
			cin>>name;
		}
};

class salary : public employee
{
	float sal;
	public:
	void sal_accept()
	{
		cout<<"Enter Salary: ";
		cin>>sal;
	}
	void display()
	{
		cout<<e_id<<"\t"<<name<<"\t"<<sal<<"\t";
	}
};

void main()
{
	salary s;
	clrscr();
	s.e_accept();
	s.sal_accept();
	cout << "\nID \t NAME\tSALARY\n";
	s.display();
	getch();
}