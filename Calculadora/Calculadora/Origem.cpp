#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {

	Calculadora* calc = new Calculadora;
	cout << " A soma dos Valores 5 + 2, e igual: " << calc->somar(5.0f, 2.0f) << endl;
	//f_sub mexi nele agora
	cout << " A subtracao dos Valores 5 - 2, e igual: " << calc->subtrair(5.0f, 2.0f) << endl;
	//f_multi mexi nele agora
	cout << " A multiplicacao dos Valores 5 * 2, e igual: " << calc->multi(5.0f, 2.0f) << endl;
	//f_divi mexi nele agr
	cout << " A divisao dos Valores 10 / 2, e igual: " << calc->divisao(10.0f, 2.0f) << endl;
	cout << "\n\n finalizado";

	system("pause");

	return 0;
}