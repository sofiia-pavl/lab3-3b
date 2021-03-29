#include "Pair.h"

#include <sstream>


Pair::Pair()
{
	one = 0;
	two = 0;
}

Pair::Pair(int a, unsigned int b)
{
	one = a;
	two = b;
}

Pair::Pair(const Pair& r)
{
	one = r.one;
	two = r.two;
}

Pair::operator string()const
{
	stringstream ss;
	ss << "First part of number = " << one << endl;
	ss << "Second part of number = " << two << endl;

	return ss.str();
}

Pair& Pair::operator++()
{
	one++;
	return *this;
}

Pair& Pair::operator--()
{
	one--;
	return *this;
}

Pair Pair::operator++(int)
{
	Pair t(*this);
	one++;
	return t;
}

Pair Pair::operator--(int)
{
	Pair t(*this);
	one--;
	return t;
}

ostream& operator << (ostream& out, const Pair& r)
{
	out << string(r);
	return out;
}

istream& operator >> (istream& in, Pair& r)
{
	cout << "First part of number= "; in >> r.one;
	cout << "Second part of number= "; in >> r.two;
	cout << endl;
	return in;
}
