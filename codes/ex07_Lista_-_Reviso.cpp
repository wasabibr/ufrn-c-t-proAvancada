#include<iostream>
using namespace std;

/*
Fazer uma fun��o que receba 3 n�meros como par�metros, A, B e C, e os ordene
de tal forma que, ao final da fun��o, A contenha o menor n�mero e C o maior. Em
seguida, fazer um programa que receba 3 n�meros do usu�rio, chame a fun��o e
mostre os n�meros ordenados.
*/

#include <iostream>

using namespace std;

// fun��o retorna maior de tr�s valores
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
}�
099
