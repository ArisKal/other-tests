# include "Circle.h"
# include <math.h>


Circle::Circle(double x,double y,double r)
{
	x0=x;
	y0=y;
	radious = fabs(r);
}

void	Circle::scale(double factor)
{
	radious = fabs(factor) * radious;
}

bool	Circle::pointIn(double x,double y)
{
/*
αν έχουμε σημεία (x,y) για να δούμε αν είναι μέσα στον κύκλο με κέντρο (x0, y0) και
ακτίνα R αν ισχύει η σχέση :

(x - x0)^2 + ( y - y0 )^2 <= R^2

*/
	return ( ( pow((x - x0),2) + pow(( y - y0 ),2) ) <= (pow(radious,2)) );

}

double	Circle::getArea()
{
	return M_PI * radious * radious;
}

double	Circle::getPerimeter()
{

	return 4.0 * M_PI * radious;
}

Circle::~Circle()
{

}
