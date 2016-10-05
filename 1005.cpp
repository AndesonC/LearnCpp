#include<iostream>
using namespace std;
void timed(int,int);
int main()
{
	int hours,minutes;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	timed(hours,minutes);
	return 0;
}

void timed(int a,int b)
{
	if(b<60)
	{
		cout << "Time: "<< a << ":";
		if(b<10)
			cout << "0" ;
		else;
		cout << b << endl;
	}
	else
	{
		cout << "Error. Please try again." << endl;
		main();
	}
}