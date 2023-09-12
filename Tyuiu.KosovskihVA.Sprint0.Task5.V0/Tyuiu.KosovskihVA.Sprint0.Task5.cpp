// Tyuiu.KosovskihVA.Sprint0.Task5.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.KosovskihVA.Sprint0.Task5.Lib/Tyuiu.KosovskihVA.Sprint0.Task5.Lib.cpp"
using namespace std;


int main()
{
    ISprint0Task5* service1 = new ServiceVV1();
    cout << "Kosovskih\a\t" << "Vladislav\t" << "Alekseevich\n";
    cout << endl;
    cout << "Task5.V1\n";
    cout << "Rezultato = " << service1->Zadacha(9, 7.5, 5); // В вашей лекции и библиотеке прописано int, по этому ответ будет целый
    cout << endl;
    cout << endl;

    ISprint0Task5* service2 = new ServiceVV2();
    cout << "Task5.V3\n";
    cout << "Rezultato = " << service2->Zadacha(2.75, 0.5, 7);
    cout << endl;
    cout << endl;

    ISprint0Task5* service3 = new ServiceVV3();
    cout << "Task5.V4\n";
    cout << "Rezultato = " << service3->Zadacha(5.45, 2.5, 3);
    cout << endl;
    cout << endl;

    ISprint0Task5* service4 = new ServiceVV4();
    cout << "Task5.V5\n";
    cout << "Rezultato = " << service4->Zadacha(67, 8.5, 6.5);
    cout << endl;
    cout << endl;

    ISprint0Task5* service5 = new ServiceVV5();
    cout << "Task5.V5\n";
    cout << "Rezultato = " << service5->Zadacha(4, 5, 6);
    cout << endl;
    cout << endl;

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
