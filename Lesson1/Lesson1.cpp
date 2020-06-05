// Lesson1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "Helpers.h"
#include <ctime>

using namespace std;

//Выводит четные или нечетные числа в заданном диапазоне
void chehorda(bool isChet, int end)
{
    
    for (int i = !isChet; i < end; i += 2)
    {
        std::cout << i << "\n";
    }
}


int main()
{
    //HomeWork 13
   /* int a = squareFunc(2, 3);
    cout << "Count: " << a << "\n";*/
    
    
    //Homework 14
   /* string stroka;
    cout << "Enter You string: ";
    getline(cin, stroka);

    cout << "Length: " << stroka.length() << endl;
    cout << "First simbol: " << stroka[0] << "\n";
    cout << "Last simbol: " << stroka[stroka.length() - 1] << "\n";

    return 0;*/


    //Homework 15
    /*
    int n = 10;             //Длина выводимой последовательности
    bool isChet = true;     //Четные или нечетные


    //Задание 1
    for (int i = 0; i < n; ++i)
    {
        cout << i << "\n";
    }
    cout << "\n";
    //Задание 2
    
    chehorda(isChet, n);
    */

    //Homework 16

    //Задание 1
    const int n = 4;
    int array[n][n] = { {} };

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            array[i][j] = i + j;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << array[i][j];
        }
        cout << "\n";
    }

    cout << "\n";

    //Задание 2
    int summ = 0;
    struct tm currentTime;
    time_t now = time(0);
    localtime_s(&currentTime, &now);
    int d = currentTime.tm_mday;
    

    for (int i = 0; i < n; ++i)
    {
        summ = summ + array[d%n][i];
    }
    cout << summ;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
