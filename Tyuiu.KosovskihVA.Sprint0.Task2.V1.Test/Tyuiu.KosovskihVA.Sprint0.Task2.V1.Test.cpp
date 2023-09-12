#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task2.V0.Lib/Tyuiu.KosovskihVA.Sprint0.Task2.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod2)
		{
			ISprint0Task2V1* service = new Service1();
			float a = 3.5;
			int b = 4;
			int c = 10;
			c = service->Summ(a, b, c);
		}
	};
}

