/*b) Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada um
dos vetores v1 e v2 têm no máximo 10 elementos, mas nem todos os elementos são
utilizados. No final escreva quantas posições foram preenchidas em cada vetor v1 e v2.*/

#include<stdio.h>

main(){

int v[10],v1[10],v2[10],l,c,v1c=0,v2c=0;

printf("Entre com os elementos do vetor:\n\n");

for(c=0;c<10;c++){

printf("Elemento [%d]: ",c);
scanf("%d",&v[c]);

if(v[c]%2==0){

    v1[c]=v[c];
    v1c++;

 }
if(v[c]%2==1){

    v2[c]=v[c];
    v2c++;

 }
}

printf("\nPosicoes preenchidas no vetor 1: %d",v2c);
printf("\nPosicoes preenchidas no vetor 2: %d",v1c);

}
