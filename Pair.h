#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pair
{
private:
	int one;
	unsigned int two;
public:
	int getOne() const { return one; }
	int getTwo() const { return two; }

	void setOne(int value) { one = value; }
	void setTwo(unsigned int value) { two = value; }

	Pair();
	Pair(int, unsigned int);
	Pair(const Pair&);

	operator string() const;

	Pair& operator ++();
	Pair& operator --();
	Pair operator ++(int);
	Pair operator --(int);

	void operator () (Pair& a, Pair& d)
	{
		if (a.getOne() == d.getOne() && a.getTwo() == d.getTwo()) cout << a.getOne() << "." << a.getTwo() << " = " << d.getOne() << "." << d.getTwo();
		else if (a.getOne() < d.getOne() || a.getOne() == d.getOne() && a.getTwo() < d.getTwo())   cout << a.getOne() << "." << a.getTwo() << " < " << d.getOne() << "." << d.getTwo();
		else if (a.getOne() > d.getOne() || a.getOne() == d.getOne() && a.getTwo() > d.getTwo())   cout << a.getOne() << "." << a.getTwo() << " > " << d.getOne() << "." << d.getTwo();
	}

	friend ostream& operator << (ostream&, const Pair&);
	friend istream& operator >> (istream&, Pair&);
};

