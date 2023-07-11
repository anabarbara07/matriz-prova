/*c) Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos.
Em seguida o programa deve fazer a multiplicação dos elementos do vetor pelas
colunas da matriz e ao final mostrar a matriz modificada.
Exemplo:
Vetor
1 2 3
Matriz Original Matriz Modificada
 1 2 3  1 2 3
 4 5 6  8 10 12
 7 8 9  21 24 27
Código em C*/

#include<stdio.h>

main(){

int v[3],m[3][3],l,c,m1[3][3];

for(l=0;l<3;l++){
for(c=0;c<3;c++){

printf("Entre com a matriz: ");
scanf("%d",&m[l][c]);

}
}

for(l=0;l<3;l++){

printf("Entre com o vetor: ");
scanf("%d",&v[l]);

}

for(l=0;l<3;l++){
for(c=0;c<3;c++){

m1[l][c]= v[l]*m[l][c];

}
}

for(l=0;l<3;l++){
printf("\n");
for(c=0;c<3;c++){

printf("%d ", m1[l][c]);

}
}

}


