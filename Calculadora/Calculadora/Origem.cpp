#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {

	Calculadora* calc = new Calculadora;
	cout << " A soma dos Valores 5 + 2, e igual: " << calc->somar(5.0f, 2.0f) << endl;

	system("pause");

	return 0;
}