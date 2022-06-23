#include "Time.h"

Time::Time()
{
	first = 0;
	second = 0;
}

Time::Time(int x = 0, int y = 0)
{
	first = x;
	second = y;
}

Time::Time(const Time& v)
{
	first = v.first;
	second = v.second;
}

Time::~Time()
{ }

void Time::setFirst(int value)
{
	if (value >= 0)
		first = value;
	else
		first = 0;
}

void Time::setSecond(int value)
{
	if (value >= 0)
		second = value;
	else
		second = 0;
}

int Time::minutes()
{
	return first * 60 + second;
}

Time& Time::operator = (const Time& r)
{
	first = r.first;
	second = r.second;

	return *this;
}

Time::operator string () const
{
	stringstream ss;
	ss << "Hours = " << first << '\n';
	ss << "Minutes = " << second << '\n';

	return ss.str();
}

ostream& operator <<(ostream& out, const Time& a)
{
	return out << a.first << ", " << a.second;
}

istream& operator >>(istream& in, Time& a)
{
	cout << "first = "; in >> a.first;
	cout << "second = "; in >> a.second;
	return in;
}

Time& Time::operator ++()
{
	++first;
	return *this;
}

Time& Time::operator --() // префіксний дектремент
{
	--first;
	return *this;
}

Time Time::operator ++(int) //постфіксний інкремент
{
	Time t(*this);
	second++;
	return t;
}

Time Time::operator --(int)
{
	Time t(*this);
	second--;
	return t;
}