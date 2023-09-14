#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task7.Lib/Tyuiu.KosovskihVA.Sprint0.Task7.Lib.cpp"
#include <math.h>
#include <string>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task7Test1
{
	TEST_CLASS(Task7Test1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task7* service1 = new Service1();
			int x = 322;
			int y = 4222;
			char a, b;
			a = service1->Rezalt(x);
			b = service1->Rezalt(y);
		}
	};
}
