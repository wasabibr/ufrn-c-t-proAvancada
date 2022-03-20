#include<iostream>
using namespace std;

/*
Fazer uma função que receba 3 números como parâmetros, A, B e C, e os ordene
de tal forma que, ao final da função, A contenha o menor número e C o maior. Em
seguida, fazer um programa que receba 3 números do usuário, chame a função e
mostre os números ordenados.
*/

#include <iostream>

using namespace std;

// função retorna maior de três valores
int acheMaior (int x, int y, int z)
{
  int maior;

  maior = x;

  if (y > maior)
    {
      maior = y;
    }

  if (z > maior)
    {
      maior = z;
    }

  return maior;
}

int main()
{
  int a, b, c, maior_tres;

  cin >> a >> b >> c;

  maior_tres = acheMaior(a,b,c);

  cout << maior_tres;

  return 0;
}ç
099
