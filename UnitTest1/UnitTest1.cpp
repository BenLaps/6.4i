#include "pch.h"
#include "CppUnitTest.h"
#include "../6.4i/6.4i.cpp" 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Elem* L = NULL;
			Insert(L, 1);
			Insert(L, 2);
			Change(L);

			Assert::AreEqual(L->info , 2);
			Assert::AreEqual(L->link->info , 1);
		
		}
	};
}
