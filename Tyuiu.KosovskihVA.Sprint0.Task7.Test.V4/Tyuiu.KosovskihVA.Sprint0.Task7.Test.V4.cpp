#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task7.Lib/Tyuiu.KosovskihVA.Sprint0.Task7.Lib.cpp"
#include <math.h>
#include <string>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task7Test4
{
	TEST_CLASS(Task7Test4)
	{
	public:

		TEST_METHOD(TestMethod4)
		{
			ISprint0Task7* service4 = new Service4();
			int x = 322223;
			int y = 4222345;
			char a, b;
			a = service4->Rezalt(x);
			b = service4->Rezalt(y);
		}
	};
}