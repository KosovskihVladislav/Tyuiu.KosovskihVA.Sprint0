#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task6.Lib/Tyuiu.KosovskihVA.Sprint0.Task6.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task6Test1
{
	TEST_CLASS(Task6Test1)
	{
	public:
		
		TEST_METHOD(TestMet1)
		{
			ISprint0Task6* service1 = new Service1();
			float x, y;
			x = 3;
			y = 23;
			int a;
			a = service1->Calculate(x, y);
		};
	};
}
