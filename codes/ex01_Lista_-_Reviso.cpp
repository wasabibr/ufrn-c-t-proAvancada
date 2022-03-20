#include<iostream>
using namespace std;

/*
Fazer um programa no qual o usuário vai entrando sucessivamente com valores
positivos ou nulos. Quando o usuário entrar com um valor negativo, o programa
para de pedir valores e calcula a média dos valores já fornecidos (excluindo
o último número negativo)
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
