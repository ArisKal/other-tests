# include "Circle.h"
# include <iostream>
using namespace std;
# include <stdlib.h>
int main()
{
	Circle c1(10,10,20);
	cout<<"C1 Area      "<<c1.getArea()<<endl;
	cout<<"C1 Perimeter "<<c1.getPerimeter()<<endl;
	c1.scale(2.0);
	cout<<"C1 Area      "<<c1.getArea()<<endl;
	cout<<"C1 Perimeter "<<c1.getPerimeter()<<endl;


	return 0;
}



