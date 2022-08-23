// 654.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double a,a1,b, b1, d=0,d1,z;
    string c;
    cout << "Решить через дробь - 1, обычное решение - 2 \n";
    cin >> z;
    if (z == 1)
    {
        cout << "Введите Первое число \n";
        cout << "Числитель ";
        cin >> a;
        cout << "Знаменатель ";
        cin >> b;
        cout << "Введите Второе число \n";
        cout << "Числитель ";
        cin >> a1;
        cout << "Знаменатель ";
        cin >> b1;
        if (b == 0 || b1 == 0)
        {
            cout << "Ошибка";
            return 0;
        }
        cout << "Введите арифметическое действие \n";
        cout << "сложение +, вычитание -, умножение *, деление / \n";
        cin >> c;
        
        if (c == "+")
        {
            d = (a/b) + (a1/b1);
            printf("Ответ:%.4f", d);
            return 0;
        }
        if (c == "-")
        {
            d = (a / b) - (a1 / b1);
            printf("Ответ:%.4f", d);
            return 0;
        }
        if (c == "/")
        {
            if (a1 == 0)
            {
                cout << "Ошибка";
            }
            d = (a / b) / (a1 / b1);
            printf("Ответ:%.4f", d);
            return 0;
        }
        if (c == "*")
        {
            d = (a / b) * (a1 / b1);
            printf("Ответ:%.4f", d);
            return 0;
        }
        cout << "Ошибка";
    }
    if (z == 2)
    {
        cout << "Введите первое число ";
        cin >> a;
        cout << "Введите второе число ";
        cin >> b;
        cout << "Введите арифметическое действие " << "\n";
        cout << "сложение +, вычитание -, умножение *, деление / \n";
        cin >> c;


        if (c == "+")
        {
            d = a + b;
            printf("Ответ:%.4f", d);
            return 0;
        }
        if (c == "-")
        {
            d = a - b;
            printf("Ответ:%.4f", d);
            return 0;
        }
        if (c == "/")
        {
            d = a / b;
            if (b == 0)
            {
                cout << "Ошибка, на ноль делить нельзя";
                return 0;
            }
            printf("Ответ:%.4f", d);
            return 0;
        }
        if (c == "*")
        {
            d = a * b;
            printf("Ответ:%.4f", d);
            return 0;
        }
        cout << "Ошибка";
    }
    
}


