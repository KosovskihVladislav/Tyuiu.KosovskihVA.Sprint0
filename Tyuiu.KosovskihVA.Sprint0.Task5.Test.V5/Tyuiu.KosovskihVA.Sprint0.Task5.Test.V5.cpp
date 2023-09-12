#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task5.Lib/Tyuiu.KosovskihVA.Sprint0.Task5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestV5
{
	TEST_CLASS(TestV5)
	{
	public:

		TEST_METHOD(TestMet5)
		{
			ISprint0Task5* service5 = new ServiceVV5();
			float a, b, c;
			a = 4;
			b = 5;
			c = 6;

			float v;
			v = service5->Zadacha(a, b, c);
		}
	};
}