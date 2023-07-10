/*a) Um sistema de controle de estoque armazena nome, quantidade em estoque e preço
unitário de 40 mercadorias. Fazer um menu que exiba as seguintes opções:
MENU
1 – Cadastra mercadorias
2 – Exibe valor total em mercadorias da empresa
3 – Sai
OPÇÃO:
*/

#include<stdio.h>

main(){

int x,p[40],q[40],cont=0,np,vt=0;
char n[40];

while(cont < 40){

printf("\nMENU\n\n");
printf("1 - Cadastra mercadorias\n2 - Exibe valor total em mercadorias da empresa\n3 - Sair\n\nOPCAO: ");
scanf("%d",&x);

if(x==3)
 break;

switch(x){

case 1: printf("\nDigite o nome da mercadoria: ");
        scanf("\n%c",&n[cont]);

        printf("Digite o preço da mercadoria: ");
        scanf("%d",&p[cont]);

        printf("Quantidade em estoque: ");
        scanf("%d",&q[cont]);

        np=p[cont]*q[cont];
        vt+=np;
        cont++;
        break;

case 2: printf("\nValor total: %d\n",vt);
        break;

}
}
}












