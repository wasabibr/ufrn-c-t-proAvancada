#include<iostream>

using namespace std;

main()
{
    /* esse trecho de programa est� errado */
    int x, *p;
    x = 10;

    /* trecho com erro: "*p = x;" pois o n�o pode ser desreferenciado at� que sejam inicializados */
    /* *p = x; */

    /* poss�vel corre�ao */
    p = &x;

    cout << *p << endl << p << endl << &p << endl << &x;

    return 0;
}
