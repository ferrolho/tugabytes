#include <iostream>
using namespace std;

int main() {
	cout << "-----------" << endl;
	cout << "Ciclo While" << endl;
	cout << "-----------" << endl;
	cout << endl;

	int x = 0;

	while (x <= 50) {
		cout << x << ", ";
		x++;
	}

	cout << endl;
	cout << "Pressione <Enter> para terminar o programa... ";
	cin.get();

	return 0;
}