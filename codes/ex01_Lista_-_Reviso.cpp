#include<iostream>
using namespace std;

/*
Fazer um programa no qual o usu�rio vai entrando sucessivamente com valores
positivos ou nulos. Quando o usu�rio entrar com um valor negativo, o programa
para de pedir valores e calcula a m�dia dos valores j� fornecidos (excluindo
o �ltimo n�mero negativo)
*/

int main()
{
    int cont = 0;
    float num, soma, media;

    cin >> num;

    while(num >= 0)
    {
        soma += num;
        cont++;
        cin >> num;
    }

    media = soma / cont;

    cout << media;

    return 0;
}
