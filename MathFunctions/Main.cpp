#include <iostream>
#include <windows.h>
#include "Main.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, ".UTF8");
    setlocale(LC_ALL, "Russian"); //���������� ����������� ���������
    system("chcp 1251");
    SetConsoleCP(1251); //������� �� �������
    SetConsoleOutputCP(1251);


    int x = 0;
    int y = 0;
    int choice = 0;

    std::cout << "������� ������ �����:";
    cin >> x;
    std::cout << "\n������� ������ �����:";
    cin >> y;
    cout << "\n�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
    cin >> choice;
    switch (choice)
    {
    case 5:
        cout << endl << x << " � ������� " << y << " = " << exponentiation(x, y);//�������
        break;
    case 4:
        cout << endl << x << " : " << y << " = " << division(x, y);//�������
        break;
    case 3:
        cout << endl << x << " * " << y << " = " << multi(x, y);//���������
        break;
    case 2:
        cout << endl << x << " - " << y << " = " << subtract(x, y);//���������
        break;
    case 1:
        cout << endl << x << " + " << y << " = " << summ(x, y);//��������
        break;
    }
}