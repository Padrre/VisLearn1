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
template <class T>
class Stack2
{
private:
    int n;          //текущая длина стака
    int nMax;       //Максимальная длина стака
    T* iarray;      //Указатель на стак
    T* backup;      //временный буфер

public:

    Stack2()
    {
        n = 0;
        nMax = 4;
        iarray = new T[nMax];
        backup = nullptr;
    }
    
    void Push(T elem)
    {
        //  Проверяем достижение максимальной длины
        //  и если достигли, то увеличиваем ее вдвое
        if (n >= nMax)
        {
            nMax = nMax * 2;
            backup = iarray;        //Копируем адрес текущего стака в буфер
            iarray = new T[nMax];   //Создаем новый стак (утечки нет! Копия указателя создана,
                                    //                      содержимое удалим в конце метода)

            //Копируем значения из старого стака в новый
            for (int i = 0; i < n; i++)
            {
                iarray[i] = backup[i];
            }

            //Удаляем старый стак и висяк
            delete[] backup;
            backup = nullptr;
        }

        iarray[n] = elem;
        n++;
    }


    

    T Pop()
    {
        if (n == 0) 
        {
            cout << "Стек пуст!" << endl;
            return NULL;
        }
        else 
        {
            n--;
            return (iarray[n]);
        }
        
    }




    ~Stack2() { delete[] iarray; }
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
    

    Stack2 <int>st;          //Тестируем класс с int
    st.Push(5);
    st.Push(6);
    st.Push(6);
    st.Push(6);
    st.Push(10);
    st.Push(6);
    cout << st.Pop() << endl;                           // --Ожидаем 6
    cout << st.Pop() << endl;                           // --Ожидаем 10


    Stack2 <double>st2;     //Тестируем класс с double
    st2.Push(5.3);
    st2.Push(7.8);
    cout << st2.Pop() << endl;                          // --Ожидаем 7.8
    st2.Push(100.05);
    st2.Push(12.6);
    cout << st2.Pop() << endl;                          // --Ожидаем 12.6

    Stack2 <string>st3;     //Тестируем класс с string
    st3.Push("World!");
    st3.Push("Hello, ");
    cout << st3.Pop();
    cout << st3.Pop() << endl;                          // --Ожидаем "Hello, World!"

    Stack2 <int>st4;     //Тестируем пустой класс
    st4.Push(9);
    cout << st4.Pop() << endl;                          // --Ожидаем 9
    cout << st4.Pop() << endl;                          // --Ожидаем NULL "Стек пуст!" 0




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
