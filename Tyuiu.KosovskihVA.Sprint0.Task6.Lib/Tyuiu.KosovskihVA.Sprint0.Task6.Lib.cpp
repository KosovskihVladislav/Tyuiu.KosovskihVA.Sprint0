// Tyuiu.KosovskihVA.Sprint0.Task6.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

class Service1 : public ISprint0Task6
{

	virtual int Calculate(float x, int y) override
	{
		return x / 3 / y + 6;
	};
		
};

class Service2 : public ISprint0Task6
{

	virtual int Calculate(float x, int y) override
	{
		return x * y / (5 + x) + 6;
	};

};

class Service3 : public ISprint0Task6
{

	virtual int Calculate(float x, int y) override
	{
		return (5 + (x * y / 3));
	};

};

class Service4 : public ISprint0Task6
{

	virtual int Calculate(float x, int y) override
	{
		return (5 * x) / (7 + y);
	};

};

class Service5 : public ISprint0Task6
{

	virtual int Calculate(float x, int y) override
	{
		return (5 * x) / (7 + y);
	};

};
