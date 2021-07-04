// lab8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int number;


	do
	{
		cout << "Введите пятизначное число: ";
		cin >> number;
	} while ((number < 10000) || (number > 99999));


	cout << number / 10000 << std::endl;
	cout << number / 1000 % 10 << std::endl;
	cout << number / 100 % 10 << std::endl;
	cout << number / 10 % 10 << std::endl;
	cout << number % 10 << std::endl;
	

}

