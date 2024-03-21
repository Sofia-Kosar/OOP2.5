#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP2.5/Triad.h"
#include "../OOP2.5/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest25
{
	TEST_CLASS(UnitTest25)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad t(1, 2, 3);
			++t;

			Assert::AreEqual(2, t.getFirst());
			Assert::AreEqual(3, t.getSecond());
			Assert::AreEqual(4, t.getThird());
		}
	};
}
