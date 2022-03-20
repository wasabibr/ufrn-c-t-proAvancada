#include<iostream>

using namespace std;

/*
Faça um programa para receber do usuário a dimensão e os elementos de um vetor
e efetuar a sua ordenação utilizando o método da bolha. Neste método de ordenação,
percorre-se o vetor comparando cada elemento com o seguinte: se eles estiverem na
ordem errada, os elementos são permutados. O vetor é percorrido tantas vezes quantas
necessárias até que não seja necessário mudar nenhum elemento.
*/

main()
{
    int dim = 0;
    float vet[50], aux;

    cin >> dim;

    for(int i = 0; i < dim; i++)
    {
        cin >> vet[i];
    }

    // coloca em ordem crescente (1,2,3,4,5...)
    for( int i = 0; i < dim; i++ )
    {
        for( int j = i + 1; j < dim; j++ ) // sempre 1 elemento à frente
        {
            // se o (i > (i+1)) então o x passa pra frente (ordem crescente)
            if ( vet[i] > vet[j] )
            {
                 aux = vet[i];
                 vet[i] = vet[j];
                 vet[j] = aux;
            }
        }
    } // fim da ordenação

    // exibe elementos ordenados

    for( int i = 0; i < dim; i++ )
      {
        cout << vet[i] << " "; // exibe o vetor ordenado
      }

    return 0;
}
