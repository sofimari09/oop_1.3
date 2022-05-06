#include "pch.h"
#include "CppUnitTest.h"
#include "../Rational.h"
#include "../Rational.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational a;
			a.setA(2);
			int test = a.getA();
			Assert::AreEqual(test, 2);

		}
	};
}
