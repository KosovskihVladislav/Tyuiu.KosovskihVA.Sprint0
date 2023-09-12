#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task5.Lib/Tyuiu.KosovskihVA.Sprint0.Task5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestV3
{
	TEST_CLASS(TestV3)
	{
	public:

		TEST_METHOD(TestMet3)
		{
			ISprint0Task5* service3 = new ServiceVV3();
			float a, b, c;
			a = 5.45;
			b = 2.5;
			c = 3;

			float v;
			v = service3->Zadacha(a, b, c);
		}
	};
}