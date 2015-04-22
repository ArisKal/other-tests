# include "Date.h"
# include <stdlib.h>
# include <iostream>

using namespace std;

int main()
{
	Date d1;
	Date d2(1987);
	Date d3(1,3,2016);

	d1.printDate();
	d2.printDate();

	cout << "Η ημερομηνία D3 :" << endl;
	d3.printDate();

	d3.nextDay();
	cout << "Η ημερομηνία D3, μια ημέρα μπροστά :" << endl;
	d3.printDate();

	d3.privDay();
	d3.privDay();
	cout << "Η ημερομηνία D3, ΔΎΟ ημέρες πίσω : " << endl;
	d3.printDate();


	if ( d2.before(d3) ) // Αν η D3 είναι μικρότερη ( αρά μεγαλύτερη σε ηλικία ) από την d2.
	{
		cout << "Η ημερομηνία ";
		d2.printDate();
		cout << "είναι μεγαλύτερη από την ";
		d3.printDate();
		cout << endl;
	}
	else
		{
		cout << "Δεν! είναι μεγαλύτερη από την " << endl;
		d3.printDate();
		cout << endl;
		}




	return 0;
}



