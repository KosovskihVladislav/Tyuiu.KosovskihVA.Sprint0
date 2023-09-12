#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Task5.Lib/Tyuiu.KosovskihVA.Sprint0.Task5.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestV4
{
	TEST_CLASS(TestV4)
	{
	public:

		TEST_METHOD(TestMet4)
		{
			ISprint0Task5* service4 = new ServiceVV4();
			float a, b, c;
			a = 67;
			b = 8.5;
			c = 6.5;

			float v;
			v = service4->Zadacha(a, b, c);
		}
	};
}