#include<iostream>

using namespace std;

main()
{
    int i, j, *p;

    i = 4;
    j = 7;

    // p recebe o endere�o de j
    p = &j;

    // opera��o de desreferencia��o da variavel do tipo ponteiro
    *p = 9;

    // imprime 4 9 9
    cout << i << " " << j << " " << *p << endl;

    return 0;
}
