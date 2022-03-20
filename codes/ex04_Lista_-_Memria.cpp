#include<iostream>

using namespace std;

main()
{
    /* esse trecho de programa está errado */
    int x, *p;
    x = 10;

    /* trecho com erro: "*p = x;" pois o não pode ser desreferenciado até que sejam inicializados */
    /* *p = x; */

    /* possível correçao */
    p = &x;

    cout << *p << endl << p << endl << &p << endl << &x;

    return 0;
}
