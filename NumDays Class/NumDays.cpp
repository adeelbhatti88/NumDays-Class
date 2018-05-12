#include "NumDays.h"



NumDays::NumDays(double h)
{
	hours = h;
}

NumDays::NumDays()
{

}

void NumDays::calc()
{
	days = (hours / 8);
}

NumDays NumDays::operator+(NumDays n)
{
	NumDays hours3;

	hours3.hours = hours + n.hours;

	return hours3;

}

NumDays NumDays::operator-(NumDays n)
{
	NumDays hours3;

	hours3.hours = hours - n.hours;

	return hours3;
}

NumDays NumDays::operator++()
{
	hours++;
	calc();
	return*this;
}

NumDays NumDays::operator--()
{
	hours--;
	hours--;
	hours--;
	calc();
	return*this;
}


NumDays::~NumDays()
{
}
