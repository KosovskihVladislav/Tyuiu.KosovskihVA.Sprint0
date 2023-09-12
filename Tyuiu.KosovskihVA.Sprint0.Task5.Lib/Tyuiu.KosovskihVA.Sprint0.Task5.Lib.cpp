// Tyuiu.KosovskihVA.Sprint0.Task5.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class ServiceVV1 : public ISprint0Task5
{

	virtual int Zadacha(float a, float b, float c)
	{
		return a * b * c;
	};
};

class ServiceVV2 : public ISprint0Task5
{

	virtual int Zadacha(float a, float b, float c)
	{
		return a + b + c;
	};
};

class ServiceVV3 : public ISprint0Task5
{

	virtual int Zadacha(float a, float b, float c)
	{
		return a + b + c;
	};
};

class ServiceVV4 : public ISprint0Task5
{

	virtual int Zadacha(float a, float b, float c)
	{
		float benz;
		benz = 100 / b;
		return a / benz * c * 2;
	};
};

class ServiceVV5 : public ISprint0Task5
{

	virtual int Zadacha(float a, float b, float c)
	{
		float S;
		S = a * b / 2;
		return S + a + b + c;
	};
};