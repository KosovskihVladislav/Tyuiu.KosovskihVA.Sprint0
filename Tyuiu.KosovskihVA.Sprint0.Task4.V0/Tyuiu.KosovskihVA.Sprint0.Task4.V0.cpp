#include <iostream>
#include <string> // ������ �� ��������

using namespace std; // ����� �� ������ std �����

int main()
{
    // ������ ������
    setlocale(LC_ALL, "Russian");
    std::cout << "Hello World!\n";
    
    cout << "Hello, World!!!" << endl;
    cout << "Hello, Vladislave Kosovskykh!!" << endl; // ����� ��������� ������ �� �������
    cout << "Hello, write your name: ";
    string a;
    cin >> a;
    cout << "Hello, " + a + "\n"; // ���� ��� ����� ���������

    // ������ ������
    
    cout << "\n";
    char c1, c2, c3, c4, c5, c6;
    c1 = '\\';   // �������� ������� �����
    c2 = '\"';   // ������� �������
    c3 = '\23';  // 23 � ������������ ������� ����������
    c4 = '\x5F'; // 5F � ����������������� ������� ����������
    c5 = '\v'; // ������������ ���������
    c6 = '\?'; // �������???
    cout << "H\\e\"ll\23o\? w\nor\tl\x5f \vd\n"; // ������ �������� ��� �������

    return 0;
}