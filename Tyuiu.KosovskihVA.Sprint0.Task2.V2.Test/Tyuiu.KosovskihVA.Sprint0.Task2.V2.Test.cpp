#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task2.V0.Lib/Tyuiu.KosovskihVA.Sprint0.Task2.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:

		TEST_METHOD(TestMethod3)
		{
			ISprint0Task2V2* service = new Service2();
			int a = 3;
			int b = 4;
			int c = 10;
			c = service->SummV2(a, b, c);
		}
	};
}

