#include<iostream.h>
#include<conio.h>
class Employee
{
	protected:
		int e_id;
		char e_name[20];
	public:
		void getEmpDetails()
		{
			cout<<"Enter Employee ID: ";
			cin>>e_id;
			cout<<"Enter Employee Name: ";
			cin>>e_name;
		}
};
class Department : public Employee
{
	private:
		int d_id;
		char d_name[20];
	public:
		void getDeptDetails()
		{
			getEmpDetails();
			cout<<"Enter Department ID: ";
			cin>>d_id;
			cout<<"Enter Department Name: ";
			cin>>d_name;
		}
		void displayDetails()
		{
			cout<<"\nEmployee ID: "<<e_id<<"\nEmployee Name: "<<e_name;
			cout<<"\nDepartment ID: "<<d_id<<"\nDepartment Name: "<<d_name;
		}
};
void main()
{
	Employee e;
	Department d;
	clrscr();
	d.getDeptDetails();
	d.displayDetails();
	getch();
}