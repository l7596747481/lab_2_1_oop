#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Time
{
private:
	int first;
	int second;

public:
	Time();
	Time(int, int);
	Time(const Time&); 
	~Time();

	void setFirst(int value);
	void setSecond(int value);
	int getFirst() const { return first; }
	int getSecond() const { return second; }

	int minutes();

	Time& operator =(const Time&);
	operator string() const;

	friend ostream& operator <<(ostream& out, const Time& a);
	friend istream& operator >>(istream& in, Time& a);

	Time& operator --();
	Time& operator ++();
	Time operator --(int);
	Time operator ++(int);
};