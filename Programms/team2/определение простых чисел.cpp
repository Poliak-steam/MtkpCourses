// дз34.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<cmath>
using namespace std;

bool hello(int j) 
{
	for (int i = 2; i < sqrt(j); i++) {
		if (j % i != 0) {
			return 1;
		}
		else {
			return 0;
		}
	}

}

int main()
{
	setlocale(LC_ALL, "ru");
	
	int num;
	cout << "введите число: ";
	cin >> num;
	cout << "оно делится без остатка на:" << endl;
	for (int j = 1; j < num; j++) {
		if (num % j == 0) {
			cout<<j;
				if (hello(j)) {
					cout << " -простое"<<endl;
				}
				else
					cout << " -составное"<<endl;
		}
	}
	return 0;
}