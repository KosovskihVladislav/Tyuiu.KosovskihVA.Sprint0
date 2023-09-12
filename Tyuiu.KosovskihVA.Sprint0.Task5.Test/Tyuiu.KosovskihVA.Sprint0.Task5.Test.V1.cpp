#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task5.Lib/Tyuiu.KosovskihVA.Sprint0.Task5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestV1
{
	TEST_CLASS(TestV1)
	{
	public:
		
		TEST_METHOD(TestMet1)
		{
			ISprint0Task5* service1 = new ServiceVV1();
			float a, b, c;
			a = 9;
			b = 7.5;
			c = 5;

			float v;
			v = service1->Zadacha(a, b, c);
		}
	};
}
