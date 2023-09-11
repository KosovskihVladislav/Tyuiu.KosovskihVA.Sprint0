#include <iostream>
#include <string> // Работа со строками

using namespace std; // Чтобы не писать std везде

int main()
{
    // Первая задача
    setlocale(LC_ALL, "Russian");
    std::cout << "Hello World!\n";
    
    cout << "Hello, World!!!" << endl;
    cout << "Hello, Vladislave Kosovskykh!!" << endl; // Умеем разрывать строки по разному
    cout << "Hello, write your name: ";
    string a;
    cin >> a;
    cout << "Hello, " + a + "\n"; // Даже так умеем разрывать

    // Вторая задача
    
    cout << "\n";
    char c1, c2, c3, c4, c5, c6;
    c1 = '\\';   // обратная дробная черта
    c2 = '\"';   // двойная кавычка
    c3 = '\23';  // 23 в восьмеричной системе исчисления
    c4 = '\x5F'; // 5F в шестнадцатеричной системе исчисления
    c5 = '\v'; // Вертикальная табуляция
    c6 = '\?'; // Вопросы???
    cout << "H\\e\"ll\23o\? w\nor\tl\x5f \vd\n"; // отдуши наспамил для задания

    return 0;
}