#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Завдання:Вивести найбільше серед позитивних чисел
    int a, b, c;

    cout << "Введіть три числа: ";
    cin >> a >> b >> c;

    int max = 0;

    if (a > 0) {
        max = a;
    }

    if (b > 0 && b > max) {
        max = b;
    }

    if (c > 0 && c > max) {
        max = c;
    }

    if (max > 0) {
        cout << "Найбільше позитивне число: " << max << endl;
    }
    else {
        cout << "Серед введених чисел немає позитивних." << endl;
    }

    return 0;
}
