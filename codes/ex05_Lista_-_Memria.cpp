#include<iostream>

using namespace std;

main()
{
    int i, j, *p;

    i = 4;
    j = 7;

    // p recebe o endereço de j
    p = &j;

    // operação de desreferenciação da variavel do tipo ponteiro
    *p = 9;

    // imprime 4 9 9
    cout << i << " " << j << " " << *p << endl;

    return 0;
}
