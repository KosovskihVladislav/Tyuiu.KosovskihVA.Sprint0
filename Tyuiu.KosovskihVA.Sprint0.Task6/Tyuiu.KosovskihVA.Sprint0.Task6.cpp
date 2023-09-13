// Tyuiu.KosovskihVA.Sprint0.Task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.KosovskihVA.Sprint0.Task6.Lib/Tyuiu.KosovskihVA.Sprint0.Task6.Lib.cpp"

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Kosovskih\a\t" << "Vladislav\t" << "Alekseevich\n";
    ISprint0Task6* dota1 = new Service1();
    cout << "Task6.V1\n";
    float x, y;
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezultato = " << dota1->Calculate(x, y);
    cout << endl;

    ISprint0Task6* dota2 = new Service2();
    cout << "Task6.V2\n";
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezultato = " << dota2->Calculate(x, y);
    cout << endl;

    ISprint0Task6* dota3 = new Service3();
    cout << "Task6.V3\n";
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezultato = " << dota3->Calculate(x, y);
    cout << endl;

    ISprint0Task6* dota4 = new Service4();
    cout << "Task6.V4\n";
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezultato = " << dota4->Calculate(x, y);
    cout << endl;

    ISprint0Task6* dota5 = new Service5();
    cout << "Task6.V5\n";
    cin >> x;
    cin >> y;
    cout << endl;
    cout << "Rezultato = " << dota5->Calculate(x, y);
    cout << endl;
}

