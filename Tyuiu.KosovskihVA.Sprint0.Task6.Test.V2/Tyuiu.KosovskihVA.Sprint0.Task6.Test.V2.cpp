#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task6.Lib/Tyuiu.KosovskihVA.Sprint0.Task6.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task6Test2
{
	TEST_CLASS(Task6Test2)
	{
	public:

		TEST_METHOD(TestMet2)
		{
			ISprint0Task6* service2 = new Service2();
			float x, y;
			x = 3;
			y = 23;
			int a;
			a = service2->Calculate(x, y);
		};
	};
}
