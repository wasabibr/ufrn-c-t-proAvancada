#include<iostream>
using namespace std;

/*
Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e
dois números reais. O programa deve retornar o resultado da operação recebida
sobre estes dois números. Este funcionamento deve ser repetido até que o símbolo
seja algo que não corresponda a nenhuma das quatro operações reconhecidas.
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

