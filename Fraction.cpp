#include "Fraction.h"

Fraction operator - (const Fraction& a, const Fraction& b)
{
	Fraction u(a.getOne() - b.getOne(), a.getTwo() - b.getTwo());
	return u;
}

Fraction::Fraction()
	: Pair(0, 0)
{}

Fraction::Fraction(int a, unsigned int b)
	: Pair(a, b)
{}

Fraction::Fraction(const Fraction& a)
	: Pair(a.getOne(),a.getTwo())
{}