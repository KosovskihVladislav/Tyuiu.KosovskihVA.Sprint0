#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task5.Lib/Tyuiu.KosovskihVA.Sprint0.Task5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestV2
{
	TEST_CLASS(TestV2)
	{
	public:

		TEST_METHOD(TestMet2)
		{
			ISprint0Task5* service2 = new ServiceVV2();
			float a, b, c;
			a = 2.75;
			b = 0.5;
			c = 7;

			float v;
			v = service2->Zadacha(a, b, c);
		}
	};
}