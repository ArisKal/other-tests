# include "Point.h"
# include <iostream>

using namespace std;

int main()
{

	Point pt1(100,100);
	Point pt2;
	
	
	pt2.move(20,30);
	
	
	pt1.print();
	pt2.print();
	
	if ( pt1.equals(pt2) )
		cout << "Έχουν τις ίδιες συντεταγμένες." << endl;
	else
		cout << "Δεν έχουν τις ίδιες συντεταγμένες." << endl;
	
	
	return 0;
}



