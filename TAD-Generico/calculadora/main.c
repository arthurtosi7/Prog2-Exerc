#include "interface_calculadora.h"
#include <stdio.h>
#include <stdlib.h>

int soma(int num1, int num2){
	return num1 + num2;
}

int multiplica(int num1, int num2){
	return num1 * num2;
}

int potencia(int num1, int num2){
	int res = 1;
	for (int i = 0; i < num2; i++)
	{
		res *= num1;
	}
	return res;
}

int main() {
	
	tCalculadora * calc = CriaCalculadora();
	
	AdicionaOperacaoCalculadora(calc, "Soma", soma);

	AdicionaOperacaoCalculadora(calc, "Multiplica", multiplica);

	AdicionaOperacaoCalculadora(calc, "Potência", potencia);
	
	ExecutaCalculadora(calc);
    
    FinalizaCalculadora(calc);
	
    return 0;
}