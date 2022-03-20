#include<iostream>
using namespace std;

/*
Faça um programa que, dado um valor em reais (sem centavos), mostre a menor
combinação existente de notas (R$ 100, 50, 20, 10, 5 e 2) para esse valor.
*/

#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(2);
	double valorTotal;
	int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, m1 = 0, m050 = 0, m025 = 0, m010 = 0, m005 = 0, m001 = 0;

	cout << "Digite o valor total: ";
	cin >> valorTotal;

	n100 = valorTotal/100;
	n50 = (valorTotal - (n100*100))/50;
	n20 = (valorTotal - (n100*100) - (n50*50))/20;
	n10 = (valorTotal - (n100*100) - (n50*50) - (n20*20))/10;
	n5 = (valorTotal - (n100*100) - (n50*50) - (n20*20) - (n10*10))/5;
	n2 = (valorTotal - (n100*100) - (n50*50) - (n20*20) - (n10*10) - (n5*5))/2;

	cout << n100 << " nota(s) de 100" << endl;
	cout << n50 << " nota(s) de 50" << endl;
	cout << n20 << " nota(s) de 20" << endl;
	cout << n10 << " nota(s) de 10" << endl;
	cout << n5 << " nota(s) de 5" << endl;
	cout << n2 << " nota(s) de 2" << endl;

	return 0;
}
