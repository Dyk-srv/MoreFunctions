#include <iostream>

int _X;	// глобальная переменная - использовать после объявления. Всегда инициализируется нулем по умолчанию
const double _PI = 3.1416; // глобальная константа
int _ARR[]; // глобальный массив, заполненный нулями

void print_X() {
	std::cout << _X << '\n';
}

void use_static() {
	static int a = 1; // Как и локальная, видна только в области видимости функции, 
	std::cout << "a = " << a << '\n'; // но, как и глобальная, не уничтожается после завершения работы функции
	a++;
	if (a > 5)
		a = 1;
}

int power(int num1, int num2 = 2) {
	int res = 1;
	for (int i = 1; i <= num2; i++)
		res *= num1;
	return res;
}

inline int absolute(int num) {	// встраиваемая функция
	return num < 0 ? -num : num;
}

int max(int num1, int num2) { // перегруженая функция
	std::cout << "INT ";
	return num1 > num2 ? num1 : num2;
}

double max(double num1, double num2) { 
	std::cout << "DOUBLE ";
	return num1 > num2 ? num1 : num2;
}

int max(int num1, int num2, int num3) {
	std::cout << "THREE INT ";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3); // контрпример, как писать код не надо!
}

template <typename T>
T absol(T num) {
	return num < 0 ? -num : num;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n; // локальная переменная функции main()
	
	// Локальные переменные - все переменные, существующие строго внутри { }, в к-рых они были объявлены
	//i = 10 // Ошибка! i вне области видимости
	/*for (int i = 0; i < 5; i++) {
		int X; // локальная переменная для цикла, уничтожается при её завершении и уничтожается при выходе за его пределы
		std::cout << '*';
		X = 5;
	}
	//X = 5 // Ошибка! X вне области видимости
	std::cout << 'n';
	print_X();
	_X = 7;
	print_X();*/


	// Статические переменные
	/*use_static();
	// std::cout << "a = " << a << '\n'; // Ошибка! 
	for (int i = 1; i < 10; i++)
		use_static();*/


	// Параметры по умолчанию
	/*std::cout << "4^3 = " << power(4, 3) << '\n';
	std::cout << "5^2 = " << power(5) << '\n';*/


	// Встраиваемые функции
	/*std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << '|' << n << "| = " << absolute(n) << '\n';*/


	// Перегруженные функции - особенность C и С++
	/*std::cout << max(10, 15) << '\n';
	std::cout << max(5.7, 5.1) << '\n';
	std::cout << max(5, 8, 2) << '\n';*/


	// Шаблонные функции
	std::cout << absol(-7) << '\n';
	std::cout << absol(-7.5) << '\n';
	std::cout << absol(-7ll) << '\n';

	return 0;
}
