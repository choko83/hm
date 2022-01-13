#include <cstdlib>
#include <iostream>

using namespace std;

/*
         Este Programa é bem simples
		 Consiste em calcular 3 notas e caso a nota seja > 24 = aprovado, > 12 = recuperação e caso nenhuma das 2 reprovado
		 primeiro programa que eu fiz utilizando goto e system :D
		 https://www.youtube.com/watch?v=AiqG9UZoOLI&list=PLx4x_zx link da aula que aprendi a fazer isso
*/

int main()
{
	int n1, n2, n3, nf;
	std::string aluno;
	char opc;

    inicio:

	// clear
	system("cls");

	cout << "Digite o nome do aluno: ";
	cin >> aluno;
	cout << "Digite o valor da primeira nota: ";
	cin >> n1;
	cout << "Digite o valor da segunda nota: ";
	cin >> n2;
	cout << "Digite o valor da terceira nota: ";
	cin >> n3;

	// Calcula o valor das 3 notas
	nf = n1 + n2 + n3;

	if (nf >= 24)
		cout << "\nO aluno " << aluno << " Foi Aprovado\n";
	else if (nf <= 14)
		cout << "\nO aluno " << aluno << " Esta de Recuperacao\n";
	else if (nf < 10)
		cout << "\nO aluno " << aluno << " Foi Reprovado\n";

	int q = nf / 3;

	cout << "\nnota final: " << q;

	cout << "\nDeseja digitar outras notas? (s/n)";
	cin >> opc;

	opc = tolower(opc); // provavelmente existe outros metodos para fazer isso

	if (opc == 's') {
		goto inicio;
	}
	else 
		system("pause"); // Apertar qualquer tecla para sair

	return 0;
}
