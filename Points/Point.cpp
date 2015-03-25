#include "Point.h"
# include <iostream>


using namespace std;


Point::Point()
{
	x=0.0;
	y=0.0;
}



Point::Point(double mx,double my)
{
	x = mx;
	y = my;
}



double	Point::getx()
{
	return x;
}



double	Point::gety()
{
	return y;
}



void	Point::move(double dx,double dy)
{
	x=x+dx;
	y=y+dy;
}



void	Point::print()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}



bool	Point::equals(Point other)
{
	return ( ( x == other.getx() ) && ( y == other.gety() ) ); /* Αν είναι ίδια επιστρέφει Trur αλλιώς αν δεν είναι και τα δύο ίδια επιστρέφει false. */
}



Point::~Point()
{

}
