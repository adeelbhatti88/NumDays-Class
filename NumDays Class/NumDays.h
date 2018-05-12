#pragma once
class NumDays
{

private:
	double hours;
	double days;

public:
	void calc();
	double getHours()
	{
		return hours;
	}
	
	double getDays()
	{
		return days;
	}

	void setHours(double h)
	{
		hours = h;
	}

	void setDays(double d)
	{
		days = d;
	}
	NumDays(double);
	NumDays();
	NumDays operator+(NumDays);
	NumDays operator-(NumDays);
	NumDays operator++();
	NumDays operator--();

	~NumDays();
};

