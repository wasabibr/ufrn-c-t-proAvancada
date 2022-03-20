#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/*
Fazer um programa que sorteie um n�mero de 0 a 100 e que permita que o usu�rio (sem
conhecer o n�mero sorteado) tente acertar. Caso n�o acerte, o programa deve imprimir
uma mensagem informando se o n�mero sorteado � maior ou menor que a tentativa feita.
Ao acertar o n�mero, o programa deve imprimir a quantidade de tentativas feitas.
*/

float geraNum()
{
    srand(time(0));  // Initialize random number generator.
    float ale = (rand() % 100) + 1;

    return ale;
}

int main()
{
    int cont = 1;
    float chutaNum, num;

    cin >> chutaNum;

    num = geraNum();

    while(chutaNum != num)
    {
        cont++;
        if(chutaNum < num)
        {
            cout << "Numero menor que o desejado" << endl;
        }
        if(chutaNum > num)
        {
            cout << "Numero maior que o desejado" << endl;
        }
        cin >> chutaNum;
    }

    cout << "Acertou o numero " << num << " em " << cont << " tentativas." << endl;

    return 0;
}
