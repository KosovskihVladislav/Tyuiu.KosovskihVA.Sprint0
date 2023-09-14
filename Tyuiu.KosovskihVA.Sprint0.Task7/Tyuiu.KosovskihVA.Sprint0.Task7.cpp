// Tyuiu.KosovskihVA.Sprint0.Task7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.KosovskihVA.Sprint0.Task7.Lib/Tyuiu.KosovskihVA.Sprint0.Task7.Lib.cpp"
#include <math.h>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    cout << "Kosovskih\a\t" << "Vladislav\t" << "Alekseevich\n";
    ISprint0Task7* dota1 = new Service1();
    cout << "Task7.V1\n";
    int x, n;
    cout << "Введите трёх значное число: ";
    cin >> x;
    if (dota1->Rezalt(x) == true)
    {
        cout << "Введите цифру на проверку: ";
        cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 3)
        {
            cout << "В числе " + sx + " есть цифра " + sn + ".\n";
        }
        else
        {
            cout << "В числе " + sx + " нет цифры " + sn + ".\n";
        }
    }
    else
    {
        cout << "Число " + to_string(x) + " не трехзначное.\n";
    }
    cout << endl;
    cout << endl;

    
    ISprint0Task7* dota2 = new Service2();
    cout << "Task7.V2\n";
    cout << "Введите четырех значное число: ";
    cin >> x;
    if (dota2->Rezalt(x) == true)
    {
        cout << "Введите цифру на проверку: ";
        cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 4)
        {
            cout << "В числе " + sx + " есть цифра " + sn + ".\n";
        }
        else
        {
            cout << "В числе " + sx + " нет цифры " + sn + ".\n";
        }
    }
    else
    {
        cout << "Число " + to_string(x) + " не четырехзначное.\n";
    }
    cout << endl;
    cout << endl;


    ISprint0Task7* dota3 = new Service3();
    cout << "Task7.V3\n";
    cout << "Введите пяти значное число: ";
    cin >> x;
    if (dota3->Rezalt(x) == true)
    {
        cout << "Введите цифру на проверку: ";
        cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 5)
        {
            cout << "В числе " + sx + " есть цифра " + sn + ".\n";
        }
        else
        {
            cout << "В числе " + sx + " нет цифры " + sn + ".\n";
        }
    }
    else
    {
        cout << "Число " + to_string(x) + " не пяти значное.\n";
    }
    cout << endl;
    cout << endl;


    ISprint0Task7* dota4 = new Service4();
    cout << "Task7.V4\n";
    cout << "Введите шести значное число: ";
    cin >> x;
    if (dota4->Rezalt(x) == true)
    {
        cout << "Введите цифру на проверку: ";
        cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 6)
        {
            cout << "В числе " + sx + " есть цифра " + sn + ".\n";
        }
        else
        {
            cout << "В числе " + sx + " нет цифры " + sn + ".\n";
        }
    }
    else
    {
        cout << "Число " + to_string(x) + " не шести значное.\n";
    }
    cout << endl;
    cout << endl;


    ISprint0Task7* dota5 = new Service5();
    cout << "Task7.V5\n";
    cout << "Введите семи значное число: ";
    cin >> x;
    if (dota5->Rezalt(x) == true)
    {
        cout << "Введите цифру на проверку: ";
        cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 7)
        {
            cout << "В числе " + sx + " есть цифра " + sn + ".\n";
        }
        else
        {
            cout << "В числе " + sx + " нет цифры " + sn + ".\n";
        }
    }
    else
    {
        cout << "Число " + to_string(x) + " не семи значное.\n";
    }
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
