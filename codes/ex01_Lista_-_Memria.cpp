#include<iostream>

using namespace std;

/*
Fazer um programa que receba do usuário uma quantidade N de números a ser digitada.
Em seguida, o programa deve solicitar N números do usuário. No final, o programa
exibe o máximo, o mínimo e a média dos valores digitados e quantos valores estão
acima da média.
*/

main()
{
    int N = 0, contAcimaMedia = 0;
    float arrayN[50], somaNum = 0, maxNum = 0, minNum = 0, mediaNum = 0;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> arrayN[i];
        somaNum += arrayN[i];
    }

    mediaNum = somaNum / N;

    minNum = arrayN[0];
    maxNum = minNum;

    for(int i = 0; i < N; i++)
    {
        if(arrayN[i] > mediaNum)
            contAcimaMedia += 1;
        if(arrayN[i] < minNum)
        {
            minNum = arrayN[i];
        }
        if(arrayN[i] > maxNum)
        {
            maxNum = arrayN[i];
        }
    }

    cout << maxNum << " " << minNum << " "
         << mediaNum << " " << contAcimaMedia << endl;

    return 0;
}
