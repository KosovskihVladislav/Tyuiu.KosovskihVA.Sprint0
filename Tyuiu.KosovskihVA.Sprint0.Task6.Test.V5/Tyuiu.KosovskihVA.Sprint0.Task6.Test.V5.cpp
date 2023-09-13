#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task6.Lib/Tyuiu.KosovskihVA.Sprint0.Task6.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task6Test5
{
	TEST_CLASS(Task6Test5)
	{
	public:

		TEST_METHOD(TestMet5)
		{
			ISprint0Task6* service5 = new Service5();
			float x, y;
			x = 3;
			y = 23;
			int a;
			a = service5->Calculate(x, y);
		};
	};
}
