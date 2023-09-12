// Tyuiu.KosovskihVA.Sprint0.Task2.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service : public ISprint0Task2V0
{
	virtual int Add(int a, int b) override
	{
		return a + b; // chotka cool and zashibis
	}
	// Ya ponimau chto mozno pomenyat' peremennei, no ne budu
};

class Service1 : public ISprint0Task2V1
{
	virtual int Summ(float a, int b, int c)
	{
		return a + b + c;
	};
};

class Service2 : public ISprint0Task2V2
{
	virtual int SummV2(int a, int b, int c)
	{
		return a + b + c;
	};
};
