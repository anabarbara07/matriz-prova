/*c) Fa�a um programa que possua um vetor denominado A que armazene 6 n�meros
inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma vari�vel inteira (simples) a soma entre os valores das posi��es
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posi��o 4, atribuindo a esta posi��o o valor 100.
(d) Mostre na tela cada valor do vetor A.
*/

#include<stdio.h>

main(){

int A[6]={1,0,5,-2,-5,7},c,x;



x=A[0]+A[1]+A[5];
printf("Soma: %d",x);

A[4]=100;

printf("\nVetor: ");

for(c=0;c<6;c++){

printf("%d ",A[c]);

}



















}
