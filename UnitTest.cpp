#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3-3b/Pair.h"
#include "../lab3-3b/Fraction.h"
#include "C:\Users\Софія\source\repos\lab3-3b\lab3-3b\Fraction.cpp"
#include "C:\Users\Софія\source\repos\lab3-3b\lab3-3b\Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Fraction a(2, 4), b(1, 2);
			Fraction c = a - b;
			Assert::AreEqual(c.getOne(), 1);
			Assert::AreEqual(c.getTwo(), 2);
		}
	};
}
