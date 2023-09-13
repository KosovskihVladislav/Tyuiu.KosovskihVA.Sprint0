#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task6.Lib/Tyuiu.KosovskihVA.Sprint0.Task6.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task6Test4
{
	TEST_CLASS(Task6Test4)
	{
	public:

		TEST_METHOD(TestMet4)
		{
			ISprint0Task6* service4 = new Service4();
			float x, y;
			x = 3;
			y = 23;
			int a;
			a = service4->Calculate(x, y);
		};
	};
}
