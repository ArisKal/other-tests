#include "date.h"
#include <iostream>
using namespace std;

int main()
{
	int d, m, y;
	date d1;
	date d2;
	cout << "Enter date:";
	    cin >> d;
		cout << "Enter month:";
		cin >> m;
		cout << "Enter year:";
		cin >> y;
		d1.initDate(d,m,y);
		d1.isLeap();
		cout <<boolalpha<<d1.isLeap() <<endl;
		d1.printDate();
		d1.nextDate();
		cout << "Enter date:";
		 cin >> d;
		 cout << "Enter month:";
		 cin >> m;
		 cout << "Enter year:";
		 cin >> y;
		 d2.initDate(d,m,y);
		cout << boolalpha << d2.isLeap() << endl;
	d2.printDate();
	d2.nextDate();
	system("pause");
	return 0;
}


