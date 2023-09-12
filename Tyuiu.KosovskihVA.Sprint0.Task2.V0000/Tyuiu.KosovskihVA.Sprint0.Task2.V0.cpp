// Tyuiu.KosovskihVA.Sprint0.Task2.V0000.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../../Tyuiu.KosovskihVA.Sprint0/Tyuiu.KosovskihVA.Sprint0.Task2.V0.Lib/Tyuiu.KosovskihVA.Sprint0.Task2.V0.Lib.cpp"
using namespace std;
int main()
{
    ISprint0Task2V0* date = new Service();
    cout << date->Add(12, 2) << endl;

    ISprint0Task2V1* dota = new Service1();
    cout << dota->Summ(12.5, 3, 6) << endl;

    ISprint0Task2V2* katya = new Service2();
    cout << katya->SummV2(12, 2, 12) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
