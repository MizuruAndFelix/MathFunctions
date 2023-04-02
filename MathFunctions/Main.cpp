#include <iostream>
#include <windows.h>
#include "Main.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, ".UTF8");
    setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
    system("chcp 1251");
    SetConsoleCP(1251); //перевод на русский
    SetConsoleOutputCP(1251);


    int x = 0;
    int y = 0;
    int choice = 0;

    std::cout << "Введите первое число:";
    cin >> x;
    std::cout << "\nВведите второе число:";
    cin >> y;
    cout << "\nВыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    cin >> choice;
    switch (choice)
    {
    case 5:
        cout << endl << x << " в степени " << y << " = " << exponentiation(x, y);//степень
        break;
    case 4:
        cout << endl << x << " : " << y << " = " << division(x, y);//деление
        break;
    case 3:
        cout << endl << x << " * " << y << " = " << multi(x, y);//умеожение
        break;
    case 2:
        cout << endl << x << " - " << y << " = " << subtract(x, y);//вычитание
        break;
    case 1:
        cout << endl << x << " + " << y << " = " << summ(x, y);//сложение
        break;
    }
}