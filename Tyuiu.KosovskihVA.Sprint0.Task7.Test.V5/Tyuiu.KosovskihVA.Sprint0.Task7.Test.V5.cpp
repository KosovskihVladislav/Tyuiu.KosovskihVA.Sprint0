#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task7.Lib/Tyuiu.KosovskihVA.Sprint0.Task7.Lib.cpp"
#include <math.h>
#include <string>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task7Test5
{
	TEST_CLASS(Task7Test5)
	{
	public:

		TEST_METHOD(TestMethod5)
		{
			ISprint0Task7* service5 = new Service5();
			int x = 3222231;
			int y = 42223451;
			char a, b;
			a = service5->Rezalt(x);
			b = service5->Rezalt(y);
		}
	};
}