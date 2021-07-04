// lab8_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
        char lower_case;
        cout << "Введите лат.букву верхнего регистра: ";
        cin >> lower_case;
        
        char upper_case(lower_case - 32);
        cout << "Результат: " << upper_case;
    
}
