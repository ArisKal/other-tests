# include "Circle.h"
# include <iostream>
# include <stdlib.h>


using namespace std;


int main()
{
	Circle c1(10,10,20);

	cout<<"C1 Area      "<<c1.getArea()<<endl;

	cout<<"C1 Perimeter "<<c1.getPerimeter()<<endl;

	c1.scale(2.0);

	cout<<"C1 Area      "<<c1.getArea()<<endl;

	cout<<"C1 Perimeter "<<c1.getPerimeter()<<endl;

	double x,y;

	cout << "Δώσε το x : " ; cin >> x;
	cout << "Δώσε το y : " ; cin >> y;

	if ( c1.pointIn(x,y) )
		cout << "Τα σημεία που έδωσες είναι μέσα στον κύκλο.";

	else
		cout << "Τα σημεία που έδωσες ΔΕΝ είναι μέσα στον κύκλο.";

	return 0;
}



