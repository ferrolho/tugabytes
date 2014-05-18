#include <iostream>
using namespace std;

int main() {
	int idade;

	cout << "Que idade e que tem? ";
	cin >> idade;
	cin.ignore();
	cout << "A sua idade e: " << idade;
	cin.get();

	return 0;
}