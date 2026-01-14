#include <stdio.h>
int main(){
 char est1[5] = "PE";
 char est2[5] = "SC";
 char cod1 = 'P';
 char cod2 = 'S';
 char cid1[25] = "Recife";
 char cid2[25] = "Joinville";
 int pop1 = 1488000;
 int pop2 = 616000;
 float area1 = 218.0;
 float area2 = 1127.4;
 float pib1 = 663507546;
 float pib2 = 498332543;
 int pttur1 = 15;
 int pttur2 = 25;

 printf("----------Carta 1----------\n");
 printf("Estado: %s\n", est1);
 printf("Código: %c\n", cod1);
 printf("Nome da Cidade: %s\n", cid1);
 printf("População: %i Habitantes\n", pop1);
 printf("Área: %.2f Km²\n", area1);
 printf("PIB: %.2f Bilhões\n", pib1);
 printf("Números de Pontos Turísticos: %d\n", pttur1);
 printf("Densidade Populacional: %.2f hab/km²\n", pop1/area1);
 printf("PIB Per Capita: %.2f Reais\n", pib1/pop1);

 printf("\n-----------Carta 2----------\n");
 printf("Estado: %s\n", est2);
 printf("Código: %c\n", cod2);
 printf("Nome da Cidade: %s\n", cid2);
 printf("População: %i Habitantes\n", pop2);
 printf("Área: %.2f Km²\n", area2);
 printf("PIB: %.2f Bilhões\n", pib2);
 printf("Números de Pontos Turísticos: %d\n", pttur2);
 printf("Densidade Populacional: %.2f hab/km²\n", pop2/area2);
 printf("PIB Per Capita: %.2f Reais\n", pib2/pop2);
printf("\n----------Comparações de alguns quesitos----------\n");
if (pop1>pop2){
    printf("\nA população de %s é maior que a de %s.\n", cid1, cid2);
}
if (pib1!=pib2){
    printf("\nO produto interno bruto de ambas as cidades são diferentes.\n");
}
if(pttur1<pttur2){
    printf("\n%s possui menos pontos turísticos que %s\n", cid1, cid2);
}
 return 0;

}