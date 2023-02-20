#include <iostream>

int _X;	// ���������� ���������� - ������������ ����� ����������. ������ ���������������� ����� �� ���������
const double _PI = 3.1416; // ���������� ���������
int _ARR[]; // ���������� ������, ����������� ������

void print_X() {
	std::cout << _X << '\n';
}

void use_static() {
	static int a = 1; // ��� � ���������, ����� ������ � ������� ��������� �������, 
	std::cout << "a = " << a << '\n'; // ��, ��� � ����������, �� ������������ ����� ���������� ������ �������
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

inline int absolute(int num) {	// ������������ �������
	return num < 0 ? -num : num;
}

int max(int num1, int num2) { // ������������ �������
	std::cout << "INT ";
	return num1 > num2 ? num1 : num2;
}

double max(double num1, double num2) { 
	std::cout << "DOUBLE ";
	return num1 > num2 ? num1 : num2;
}

int max(int num1, int num2, int num3) {
	std::cout << "THREE INT ";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3); // �����������, ��� ������ ��� �� ����!
}

template <typename T>
T absol(T num) {
	return num < 0 ? -num : num;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n; // ��������� ���������� ������� main()
	
	// ��������� ���������� - ��� ����������, ������������ ������ ������ { }, � �-��� ��� ���� ���������
	//i = 10 // ������! i ��� ������� ���������
	/*for (int i = 0; i < 5; i++) {
		int X; // ��������� ���������� ��� �����, ������������ ��� � ���������� � ������������ ��� ������ �� ��� �������
		std::cout << '*';
		X = 5;
	}
	//X = 5 // ������! X ��� ������� ���������
	std::cout << 'n';
	print_X();
	_X = 7;
	print_X();*/


	// ����������� ����������
	/*use_static();
	// std::cout << "a = " << a << '\n'; // ������! 
	for (int i = 1; i < 10; i++)
		use_static();*/


	// ��������� �� ���������
	/*std::cout << "4^3 = " << power(4, 3) << '\n';
	std::cout << "5^2 = " << power(5) << '\n';*/


	// ������������ �������
	/*std::cout << "������� ����� -> ";
	std::cin >> n;
	std::cout << '|' << n << "| = " << absolute(n) << '\n';*/


	// ������������� ������� - ����������� C � �++
	/*std::cout << max(10, 15) << '\n';
	std::cout << max(5.7, 5.1) << '\n';
	std::cout << max(5, 8, 2) << '\n';*/


	// ��������� �������
	std::cout << absol(-7) << '\n';
	std::cout << absol(-7.5) << '\n';
	std::cout << absol(-7ll) << '\n';

	return 0;
}
