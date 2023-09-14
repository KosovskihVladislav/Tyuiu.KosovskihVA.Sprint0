#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task7.Lib/Tyuiu.KosovskihVA.Sprint0.Task7.Lib.cpp"
#include <math.h>
#include <string>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task7Test2
{
	TEST_CLASS(Task7Test2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* service2 = new Service2();
			int x = 3222;
			int y = 42223;
			char a, b;
			a = service2->Rezalt(x);
			b = service2->Rezalt(y);
		}
	};
}