// Lesson1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "Helpers.h"
#include <ctime>
#include <math.h>
#include <stack>
#include <array>

using namespace std;

//Выводит четные или нечетные числа в заданном диапазоне
void chehorda(bool isChet, int end)
{
    
    for (int i = !isChet; i < end; i += 2)
    {
        std::cout << i << "\n";
    }
}


//Create classes for Homework 17:

class MyClass
{
private:
    int a;
    int b;

public:

    MyClass() : a(0), b(0)
    {}

    MyClass(int _a, int _b) : a(_a), b(_b)
    {}

    void GetCounts()
    {
        cout << a << " " << b << endl;
    }
};

class Vector
{
private:
    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

public:
    Vector()
    {}

    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}

    void getModule()
    {
        double module = sqrt(pow(x, 2) + pow(y,2) + pow(z, 2));
        cout << module << endl;
    }

};

//Create class for Homework 18

class Stack2
{
private:
    int n = 0;
    int* iarray = new int[n];
    int* barray;

public:
    
    void Push(int elem)
    {
        //Увеличиваем размер массива
        n = n + 1;

        //Создаем бекап указателя
        barray = iarray;

        //Новый увеличенный массив
        iarray = new int[n];

        //Копируем в новый массив значения из бекапа
        for (int i = 0; i < (n - 1); ++i)
        {
            *(iarray + i) = *(barray + i);
        }

        //Добавляем в последнюю ячейку значение из параметра
        *(iarray + (n - 1)) = elem;

        //Чистим память
        delete[] barray;
        barray = nullptr;
    }

    void Pop()
    {
        n = n - 1;

        barray = iarray;
        iarray = new int[n];

        for (int i = 0; i < (n); ++i)
        {
            *(iarray + i) = *(barray + i);
        }

        delete[] barray;
        barray = nullptr;
    }

    int Top()
    {
        return *(iarray + (n - 1));
    }

    Stack2()
    {
        n = 0;
        iarray = new int[n];
    }

};


int main()
{
    setlocale(LC_ALL, "rus");
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
    /*
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
    */

    //Homework 17
    /*
    cout << "Default constructor MyClass: " << endl;
    MyClass a;
    a.GetCounts();

    cout << "Param constructor MyClass: " << endl;
    MyClass b(1,5);
    b.GetCounts();

    cout << "Default constructor Vector: " << endl;
    Vector v1;
    v1.getModule();

    cout << "Param constructor Vector: " << endl;
    Vector v2(5, 6, 12);
    v2.getModule();
    */


    //Homework 18

    //int n = 5;                              //Размер стака
    //stack <int> newStack;

    //cout << "Введите " << n << " целых чисел через ENTER: " << endl;
    //for (int i = 0; i < n; ++i)
    //{
    //    int a;
    //    cin >> a;
    //    newStack.push(a);
    //}

    //cout << "Выводим числа из стака: " << endl;

    //while (!newStack.empty())
    //{
    //    cout << newStack.top() << " ";
    //    newStack.pop();
    //}
    
int nn = 4;
    int* arr1 = new int[nn]{10,20,30,40};

    int* arr2 = new int[5] {0, 0, 0, 0, 50};

    for (int i = 0; i < nn ; ++i)
    {
        *(arr2 + i) = *(arr1 + i);
    }

    delete[] arr1;
    arr1 = arr2;
    arr2 = nullptr;


    for (int i = 0; i < 5; ++i)
    {
        cout << *(arr1 + i) << " ";
    }

    Stack2 st;
    st.Push(5);
    st.Push(6);
    st.Push(7);
    st.Pop();
    cout  << st.Top();

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
