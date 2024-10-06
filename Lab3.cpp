#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num, i = 2;
	bool prime = true;
	cout << "Введіть число: ";
	cin >> num;
	if (num <= 1) {
		prime = false;
	}
		while (i < num) {
			if (num % i == 0) {
				prime = false;
				break;
			}
			i++;
		}
	if (prime) {
		cout << "Є простим числом " << endl;
	}
	else {
		cout << "Не є простим числом " << endl;
	}
	return 0;
}
