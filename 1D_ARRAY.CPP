#include<iostream.h>
#include<conio.h>
void main()
{
	int i,smallest,largest,arr[10];
	clrscr();
	cout<<"\nEnter Any 10 Array Elements: \n\t";
	for(i=0;i<10;i++)
		cin>>arr[i];
	cout<<"\nEntered Array Elements Are: \n\t";
	for(i=0;i<10;i++)
		cout<<arr[i]<<" ";
	smallest = arr[0];
	largest = arr[0];
	for(i=0;i<10;i++)
	{
		if(smallest > arr[i])
			smallest = arr[i];
		else if(largest < arr[i])
			largest = arr[i];
	}
	cout<<"\n\nLargest Element: "<<largest;
	cout<<"\n\nSmallest Element: "<<smallest;
	getch();
}