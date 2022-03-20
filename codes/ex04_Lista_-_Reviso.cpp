#include<iostream>

using namespace std;

int main()
{
    int x, y, p, a;

    cout << "Informe dois números:";

    cin >> x;
    cin >> y;
    p = 0;
    a = y;

    // se for digitado 3 e 4 pelo usuário, o programa impreme 12
    // basicamente o programa serve para somar o valor inicial, tantas
    // vezes quanto o segundo valor digitado.

    while(a > 0){
        p += x;
        a--;
    }

    cout << "\nResultado: " << p << endl;

    return 0;
}
