/*a) Escrever um programa que declare um vetor de 20 inteiros, leia um valor para cada
posição e no final mostre quantos elementos possuem valor maior, menor e igual ao
primeiro elemento do vetor*/

#include<stdio.h>

main(){

int v[20],c,m=0,i=0,me=0;

printf("Entre com o vetor:\n\n");

for(c=0;c<20;c++){

printf("Elemento [%d]: ",c);
scanf("%d",&v[c]);

if(v[c]>v[0]){
    m++;}

if(v[c]==v[0]){
    i++;}

if(v[c]<v[0]){
    me++;}

}
printf("\nMaior que o primeiro elemento: %d",m);
printf("\nMenor que o primeiro elemento: %d",me);
printf("\nIgual ao primeiro elemento: %d",i);

}











