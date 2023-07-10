/* Criar um algoritmo que armazene dados inteiros em uma matriz de ordem cinco e
imprima: toda a matriz e uma outra matriz formada pelos números que se encontram
em posições cuja linha mais coluna formam um número par.
*/

#include<stdio.h>

main(){

int m[5][5],a[5][5],l,c;

for(l=0;l<5;l++)
for(c=0;c<5;c++){

printf("Entre com os valores: ");
scanf("%d",&m[l][c]);

if((l+c)%2==0)
 a[l][c]=m[l][c];

else
 a[l][c]=0;

}

for(l=0;l<5;l++){
printf("\n");
for(c=0;c<5;c++){

printf("%d ",m[l][c]);

}
}

printf("\n");

for(l=0;l<5;l++){
printf("\n");
for(c=0;c<5;c++){

printf("%d ",a[l][c]);

}
}

}



