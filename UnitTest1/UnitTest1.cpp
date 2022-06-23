#include "pch.h"
#include "CppUnitTest.h"
#include "../Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Time t(15, 15);

			Assert::AreEqual(915, t.minutes());
		}
	};
}