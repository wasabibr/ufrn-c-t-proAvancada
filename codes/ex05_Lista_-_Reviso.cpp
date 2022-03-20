#include<iostream>
using namespace std;

/*
Fazer uma função que recebe um dia, um mês e um ano como parâmetros e retorna
o número de dias desde o início daquele ano. Para o dia 1º de janeiro de qualquer
ano, a função deve retornar 1. Para o dia 31 de dezembro, ela deve retornar
365 ou 366, dependendo de o ano ser ou não bissexto. Um ano é bissexto quando
é múltiplo de 400 ou também quando é múltiplo de 4 e não múltiplo de 100.
*/

int intMes(char mes)
{
    int m;

    switch(mes)
    {
        case ("1" || "janeiro" || "Janeiro" || "JANEIRO"):
            m = 1;
            break;
        case ("2" || "fevereiro" || "Fevereiro" || "FEVEREIRO"):
            m = bissesto(ano);
            break;
        case ("3" || "março" || "Março" || "MARÇO"):
            m = 2;
            break;
        case ("4" || "abril" || "Abril" || "ABRIL"):
            m = 4;
            break;
        case ("5" || "maio" || "Maio" || "MAIO"):
            m = 5;
            break;
        case ("6" || "junho" || "Junho" || "JUNHO"):
            m = 6;
            break;
        case ("7" || "julho" || "Julho" || "JULHO"):
            m = 7;
            break;
        case ("8" || "agosto" || "Agosto" || "AGOSTO"):
            m = 8;
            break;
        case ("9" || "setembro" || "Setembro" || "SETEMBRO"):
            m = 9;
            break;
        case ("10" || "outubro" || "Outubro" || "OUTUBRO"):
            m = 10;
            break;
        case ("11" || "novembro" || "Novembro" || "NOVEMBRO"):
            m = 11;
            break;
        case ("12" || "dezembro" || "Dezembro" || "DEZEMBRO"):
            m = 12;
            break;
        default:
            m = 0;
            break;
    }

    return m;
}

bool bissexto(unsigned ano)
{
  return ( ano%400 == 0 || (ano%4==0 && ano%100!=0) );
}

int diasMes(char mes)
{
    int m = 0;

    switch(mes)
    {
        case 1:
            m = 31;
            break;
        case 2:
            m = bissesto(ano);
            break;
        case 3:
            m = 31;
            break;
        case 4:
            m = 30;
            break;
        case 5):
            m = 31;
            break;
        case 6):
            m = 30;
            break;
        case 7:
            m = 31;
            break;
        case 8:
            m = 31;
            break;
        case 9:
            m = 30;
            break;
        case 10:
            m = 31;
            break;
        case 11:
            m = 30;
            break;
        case 12:
            m = 31;
            break;
        default:
            cout << "informe um valor valido para o mes: ";
            cin >> mes;
            int diasMes(mes);
            break;
    }

    return m;
}

recebeData(int dia, char mes, int ano)
{
    int cDias = 0, m, numDiasAno = 0;



    return numDiasAno;
}

int main()
{
    int d, m, a;

    cin >> d >> m >> a;

    cout << recebeData(d, m, a);

    return 0;
}
