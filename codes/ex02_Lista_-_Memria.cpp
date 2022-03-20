#include<iostream>

using namespace std;

/*
Fa�a um programa para receber do usu�rio a dimens�o e os elementos de um vetor
e efetuar a sua ordena��o utilizando o m�todo da bolha. Neste m�todo de ordena��o,
percorre-se o vetor comparando cada elemento com o seguinte: se eles estiverem na
ordem errada, os elementos s�o permutados. O vetor � percorrido tantas vezes quantas
necess�rias at� que n�o seja necess�rio mudar nenhum elemento.
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
        for( int j = i + 1; j < dim; j++ ) // sempre 1 elemento � frente
        {
            // se o (i > (i+1)) ent�o o x passa pra frente (ordem crescente)
            if ( vet[i] > vet[j] )
            {
                 aux = vet[i];
                 vet[i] = vet[j];
                 vet[j] = aux;
            }
        }
    } // fim da ordena��o

    // exibe elementos ordenados

    for( int i = 0; i < dim; i++ )
      {
        cout << vet[i] << " "; // exibe o vetor ordenado
      }

    return 0;
}
