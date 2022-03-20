#include<iostream>

using namespace std;

/*
Seja a[] um array qualquer, independente de tipo e tamanho, e pa um ponteiro para
o mesmo tipo de a[]. Verifique se as afirmações a seguir são verdadeiras ou falsas:

 Após a atribuição pa=a[0], pa e a possuem valores idênticos (F)
 A atribuição pa=&a[0] pode ser escrita como pa=a (F)
 Uma referencia a a[i] pode ser escrita como &(a+i) (F)
 &a[i] e a+i são idênticos (F)
 a+i é o endereço do i-ésimo elemento do vetor (F)
 pa[i] é idêntico a *(pa+i) (F)
 pa=a é uma operação valida (F)
 pa++ é uma operação valida (V)
 a=pa é uma operação valida (F) // int != *int
 a++ é uma operação valida (V)
*/

