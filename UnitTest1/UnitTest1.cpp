#include "pch.h"
#include "CppUnitTest.h"
#include "../6.5/6.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Stack<int> a(5);

			a.Push(3);

			Assert::AreEqual(3, a.Top());

		}
	};
}
