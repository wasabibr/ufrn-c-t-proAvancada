#include<iostream>
using namespace std;

/*
Fazer um programa que recebe um s�mbolo de opera��o do usu�rio (+, -, / ou *) e
dois n�meros reais. O programa deve retornar o resultado da opera��o recebida
sobre estes dois n�meros. Este funcionamento deve ser repetido at� que o s�mbolo
seja algo que n�o corresponda a nenhuma das quatro opera��es reconhecidas.
*/

void opera(char operador, float numA, float numB)
{
    float res;

    if(operador == '+')
    {
        res = numA + numB;
        cout << res;
    }
    if(operador == '-')
    {
        res = numA - numB;
        cout << res;
    }
    if(operador == '*')
    {
        res = numA * numB;
        cout << res;
    }
    if(operador == '/')
    {
        res = numA / numB;
        cout << res;
    }
}

int main()
{
    char op;
    float nA, nB, res;

    cin >> op >> nA >> nB;

    while(op == '+' || op == '-' || op == '*' || op == '/')
    {
        opera(op, nA, nB);
        cout << endl;
        cin >> op;
        if(op != '+' && op != '-' && op != '*' && op != '/')
        {
            break;
        }
        cin >> nA >> nB;
    }

    return 0;
}

