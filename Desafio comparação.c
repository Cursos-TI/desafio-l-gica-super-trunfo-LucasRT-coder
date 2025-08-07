#include <stdio.h> 

int main (){

    // Dados da Carta 1 
    unsigned long int populacao; 
    int pontos_turisticos; 
    float area; 
    float pib; 
    char codigo[20]; 
        float densidade; 
        float pib_per_capita; 
        float super_poder; 
        
  

    // Dados da Carta 2 
    unsigned long int populacao2; 
    int pontos_turisticos2; 
    float area2; 
    float pib2; 
    char codigo2[20]; 
        float densidade2; 
        float pib_per_capita2; 
        float super_poder2; 

     // Abertura do mesmo 
printf("Desafio Aula: Super_Trunfo_C_Estacio. \n"); 
printf("\n");

     // Inserir os dados da PRIMEIRA*1 carta  
printf("Cadastro, digite o código da primeira cidade:");
scanf("%s", codigo); 

printf("Digite a área desta cidade:"); 
scanf("%f", &area); 

printf("Digite a população:");
scanf("%lu", &populacao);

printf("Digite o PIB:");
scanf("%f", &pib);

printf("Digite o número de pontos turísticos:");
scanf("%d", &pontos_turisticos);

     //adicionando os relatórios de densidade1 e per capita1 abaixo; 
densidade = populacao /area; 
pib_per_capita = pib / populacao;     
    // irei adicionar o cálculo do super poder da Carta1 
super_poder = populacao + area + pib + pontos_turisticos + pib_per_capita + (1.0 / densidade);  

printf("\n");

     // Inserir os dados da SEGUNDA*2 carta  
printf("Cadastro, digite o código da segunda cidade:");
scanf("%s", codigo2); 

printf("Digite a área desta cidade: "); 
scanf("%f", &area2); 

printf("Digite a população: ");
scanf("%lu", &populacao2);

printf("Digite o PIB: ");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontos_turisticos2);

     //adicionando os relatórios da segunda densidade2 e per capita2 abaixo; 
densidade2 = populacao2 /area2; 
pib_per_capita2 = pib2 / populacao2;    
     // irei adicionar o cálculo do super poder da Carta2   
super_poder = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

printf("\n");
printf("\n");

     //Apresentação dos dados da PRIMEIRA*1 carta: 
printf("Dados inseridos da Primeira Carta\n "); 
printf("Código: %s\n", codigo); 
printf("Àrea: %.2f km*2\n", area); 
printf("População: %d\n milhões\n", populacao);
printf("PIB: %.2f bilhões de reais\n", pib); 
printf("Pontos Turísticos: %d\n", pontos_turisticos); 
printf("Densidade Populacional: %.2f hab/km²\n", densidade);
printf("PIB per Capita: %.2f reais\n", pib_per_capita);
     // irei adicionar os dados para o super poder 
printf("Super Poder: %.2f\n", super_poder); 

printf("\n");

     //Apresentação dos dados da SEGUNDA*2 carta:
printf("Dados inseridos da Segunda Carta\n"); 
printf("Código: %s\n", codigo2); 
printf("Àrea: %.2f km*2\n", area2); 
printf("População: %d\n milhões\n", populacao2);
printf("PIB: %.2f bilhões de reais\n", pib2); 
printf("Pontos Turísticos: %d\n", pontos_turisticos2); 
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
     // irei adicionar os dados para o super poder 
printf("Super Poder: %.2f\n", super_poder2); 

printf("\n");

     // IF-ELSE, Comparação pelo atributo: População 
printf("Comparação_De_Cartas\n"); 
printf("Optado pelo atributo: População\n"); 

     // A população 1 sendo maior que a 2, gera verdadeira e a informação é apresentada como vencedora. 
  if (populacao > populacao2) {
     printf("Resultado: Primeira Carta %s é a vencedora!\n", codigo); 
  }
     // Caso a população 1 seja menor que a 2, gera verdadeira e a informação é apresentada como vencedora, caso seja maior ai apresenta como falso
   else if (populacao < populacao2) { 
     printf("Resultado: Segunda Carta %s é a vencedora!\n", codigo2); 
  } 
    // Caso ambas apresentem (=) igualdade, apresentará empate. 
   else { 
     printf("Resultado: Deram Empate!\n); 
  }

return 0; 

}
