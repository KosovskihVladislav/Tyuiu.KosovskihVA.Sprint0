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
    cout << "������� ��� ������� �����: ";
    cin >> x;
    if (dota1->Rezalt(x) == true)
    {
        cout << "������� ����� �� ��������: ";
        cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 3)
        {
            cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
        }
        else
        {
            cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
        }
    }
    else
    {
        cout << "����� " + to_string(x) + " �� �����������.\n";
    }
    cout << endl;
    cout << endl;

    
    ISprint0Task7* dota2 = new Service2();
    cout << "Task7.V2\n";
    cout << "������� ������� ������� �����: ";
    cin >> x;
    if (dota2->Rezalt(x) == true)
    {
        cout << "������� ����� �� ��������: ";
        cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 4)
        {
            cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
        }
        else
        {
            cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
        }
    }
    else
    {
        cout << "����� " + to_string(x) + " �� ��������������.\n";
    }
    cout << endl;
    cout << endl;


    ISprint0Task7* dota3 = new Service3();
    cout << "Task7.V3\n";
    cout << "������� ���� ������� �����: ";
    cin >> x;
    if (dota3->Rezalt(x) == true)
    {
        cout << "������� ����� �� ��������: ";
        cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 5)
        {
            cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
        }
        else
        {
            cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
        }
    }
    else
    {
        cout << "����� " + to_string(x) + " �� ���� �������.\n";
    }
    cout << endl;
    cout << endl;


    ISprint0Task7* dota4 = new Service4();
    cout << "Task7.V4\n";
    cout << "������� ����� ������� �����: ";
    cin >> x;
    if (dota4->Rezalt(x) == true)
    {
        cout << "������� ����� �� ��������: ";
        cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 6)
        {
            cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
        }
        else
        {
            cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
        }
    }
    else
    {
        cout << "����� " + to_string(x) + " �� ����� �������.\n";
    }
    cout << endl;
    cout << endl;


    ISprint0Task7* dota5 = new Service5();
    cout << "Task7.V5\n";
    cout << "������� ���� ������� �����: ";
    cin >> x;
    if (dota5->Rezalt(x) == true)
    {
        cout << "������� ����� �� ��������: ";
        cin >> n;
        string sx = to_string(x);
        string sn = to_string(n);
        if (sx.find(sn) < 7)
        {
            cout << "� ����� " + sx + " ���� ����� " + sn + ".\n";
        }
        else
        {
            cout << "� ����� " + sx + " ��� ����� " + sn + ".\n";
        }
    }
    else
    {
        cout << "����� " + to_string(x) + " �� ���� �������.\n";
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
