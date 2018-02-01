#include<iostream.h>
#include<conio.h>
class Budget
{
	float income, tax;
	public:
		void show(float, float);
		void display();
		void calculate();
};
void Budget :: show(float incm, float tx)
{
	income = incm;
	tax = tx;
}
void Budget :: display()
{
	cout<<"\nGiven Income Value: "<<income<<" /-";
	cout<<"\nGiven Tax Rate: "<<tax<<"%";
}
void Budget :: calculate()
{
	float calc_tax;
	calc_tax = (income * tax) / 100;
	cout<<"\nCalculated Tax Based On Given Income And Rate: "<<calc_tax<<" /-";
}
void main()
{
	Budget b;
	float incm,tx;
	char ch;
	clrscr();
	b.show(10000.0,18.0);
	b.display();
	b.calculate();
	do
	{
		cout<<"\n---------------------------------------------------------------------";
		cout<<"\n\nWould You Like To Calculate Tax With Different Values ???";
		cout<<"\n(Press y/Y - YES | n/N - NO): ";
		cin>>ch;
		if(ch == 'y' || ch == 'Y')
		{
			cout<<"\nEnter Income: ";
			cin>>incm;
			cout<<"\nEnter Tax Rate: ";
			cin>>tx;
			b.show(incm,tx);
			b.display();
			b.calculate();
		}
		else
			break;
	}while(ch == 'y' || ch == 'Y');
}