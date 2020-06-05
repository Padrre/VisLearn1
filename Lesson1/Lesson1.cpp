// Lesson1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "Helpers.h"
using namespace std;

//Выводит четные или нечетные числа в заданном диапазоне
void chehorda(bool isChet, int start, int end)
{
    start = start + !isChet;
    for (int i = start; i < end; i + 2)
    {
<<<<<<< Updated upstream
        std::cout << i << "\n";
=======
        if (isChet) cout << i << "\n";
        isChet = !isChet;
>>>>>>> Stashed changes
    }
}

int<array> createArray(int array)
{
    const int n = 5;
    int array[n][n];

    return array[][];
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

<<<<<<< Updated upstream
    int n = 10;             //Длина выводимой последовательности
    bool isChet = true;           //Четные или нечетные
=======
    //int s = 0;              //Первое число выводимой последовательности
    //int n = 10;             //Длина выводимой последовательности
    //string boolCount;  //Для выбора пользователем вариантов чет/нечет с консоли
>>>>>>> Stashed changes

    ////Задание 1
    //for (int i = 0; i < n; ++i)
    //{
    //    cout << i << "\n";
    //}

    ////Задание 2
    //cout << "Pechatat' chetnie ili nechetnie? (c/n):";
    //getline(cin, boolCount);
    //chehorda((boolCount == "c"), s, (s + n));

<<<<<<< Updated upstream
    //Задание 2
    chehorda(isChet, 0, n);
=======
>>>>>>> Stashed changes

    //Homework 16
    

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
