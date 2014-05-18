#include <iostream>
using namespace std;

int main() {
	int idade;

	// titulo do programa
	cout << "\t\tAvaliador de idade" << endl << endl;

	/* pergunta */
	cout << "Qual a sua idade? ";
	/* a ler idade */
	cin >> idade; cin.ignore();

	cout << "Tens " << idade << " anos." << endl;
	cout << endl;

	/*
	Sintaxe da condixao if:
	-----------------------

	if (uma condicao) {
		fazer isto
	} else if (Segunda condicao) {
		fazer isto
	} else if (terceira condicao) {
		fazer outra coisa
	} else if (quarta cond....) {
		....
	} else {
		fazer a ultima opçao restante
	}
	*/

	// se idade >= 20
	if (idade >= 20) {
		cout << "Es um adulto." << endl;
	}
	// se idade >= 13 e < 20, escrever: es um adolescente
	else if (idade >= 13 && idade < 20) {
		cout << "Es um adolescente." << endl;
	}
	// caso contrario
	else {
		cout << "Es uma crianca." << endl;
	}

	cout << "Prima enter para terminar o programa.";
	cin.get(); // esperar pelo enter

	return 0;
}