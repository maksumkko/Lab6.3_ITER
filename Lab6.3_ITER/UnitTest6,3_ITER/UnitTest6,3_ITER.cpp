#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.3_ITER/Lab6.3_ITER.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63ITER
{
	TEST_CLASS(UnitTest63ITER)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 2, 3, 4, 5 };
			int sum = 0;
			sumA(arr, 0, sum);

			Assert::AreEqual(sum, 0);
		}
	};
}
