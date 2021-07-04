// lab8_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


void average(int n)
{
    int* arr; int sum = 0;
    arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Элемент массива[" << i << "]: ";
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
        sum += arr[i];

    cout << "Средние арефмитическое массива: " << sum / n;

}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите размер массива: ";
    int n; cin >> n;

    average(n);
}

