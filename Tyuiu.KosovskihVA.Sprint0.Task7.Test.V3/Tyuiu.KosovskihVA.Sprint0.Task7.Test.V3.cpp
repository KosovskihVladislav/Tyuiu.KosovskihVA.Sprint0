#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task7.Lib/Tyuiu.KosovskihVA.Sprint0.Task7.Lib.cpp"
#include <math.h>
#include <string>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task7Test3
{
	TEST_CLASS(Task7Test3)
	{
	public:

		TEST_METHOD(TestMethod3)
		{
			ISprint0Task7* service3 = new Service3();
			int x = 32222;
			int y = 422234;
			char a, b;
			a = service3->Rezalt(x);
			b = service3->Rezalt(y);
		}
	};
}