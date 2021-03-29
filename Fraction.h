#pragma once
#include "Pair.h"
class Fraction :
    public Pair
{
public:
	Fraction();
	Fraction(int, unsigned int);
	Fraction(const Fraction&);

	friend Fraction operator - (const Fraction& a, const Fraction& b);
   
};

