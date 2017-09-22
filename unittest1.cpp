#include "stdafx.h"
#include "CppUnitTest.h"
#include "factorial.h"
#include "stack.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		factorial obj;
		int i = obj.fact(5);
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(120,i);
		}
	
	};
}