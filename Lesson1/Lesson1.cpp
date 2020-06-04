// Lesson1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "Helpers.h"

//Выводит четные или нечетные числа в заданном диапазоне
void chehorda(bool isChet, int start, int end)
{
    isChet = !(isChet && start%2);

    for (int i = start; i < end; ++i)
    {
        if (isChet) std::cout << i << "\n";
        isChet = !isChet;
    }
}

int main()
{
    //HomeWork 13
   /* int a = squareFunc(2, 3);
    std::cout << "Count: " << a << "\n";*/
    
    
    //Homework 14
   /* std::string stroka;
    std::cout << "Enter You string: ";
    getline(std::cin, stroka);

    std::cout << "Length: " << stroka.length() << std::endl;
    std::cout << "First simbol: " << stroka[0] << "\n";
    std::cout << "Last simbol: " << stroka[stroka.length() - 1] << "\n";

    return 0;*/


    //Homework 15

    int s = 0;              //Первое число выводимой последовательности
    int n = 10;             //Длина выводимой последовательности
    std::string boolCount;  //Для выбора пользователем вариантов чет/нечет с консоли

    //Задание 1
    for (int i = 0; i < n; ++i)
    {
        std::cout << i << "\n";
    }

    //Задание 2
    std::cout << "Pechatat' chetnie ili nechetnie? (c/n):";
    getline(std::cin, boolCount);
    chehorda((boolCount == "c"), s, (s + n));

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
