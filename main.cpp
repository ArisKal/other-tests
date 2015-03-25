#include "date.h"
#include <iostream>
using namespace std;

int main()
{
	int d, m, y;
	date d1;
	date d2;

	d1.initDate();
	d1.isLeap();
		
		
	cout << boolalpha << d1.isLeap() <<endl;

	d1.nextDate();
	cout << "Αύξηση μίας ημέρας : " ;


	d1.printDate();
	

		
		
	d2.initDate();

	cout << boolalpha << d2.isLeap() << endl;

	d2.nextDate();
	cout << "Αύξηση μίας ημέρας : " ;
	
	
	d2.printDate();

	
	return 0;
}


