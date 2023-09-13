#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task6.Lib/Tyuiu.KosovskihVA.Sprint0.Task6.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task6Test3
{
	TEST_CLASS(Task6Test3)
	{
	public:

		TEST_METHOD(TestMet3)
		{
			ISprint0Task6* service3 = new Service3();
			float x, y;
			x = 3;
			y = 23;
			int a;
			a = service3->Calculate(x, y);
		};
	};
}

