#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas 
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int cartaA = 1;
    int cartaB = 2;
    char estadoA = 'A';
    char estadoB = 'B'; 
    char codigo_cartaA[4] = "A01";
    char codigo_cartaB[4] = "B02"; 
    char cidadeA[59]; 
    char cidadeB[59]; 
    int populacaoA;
    int populacaoB;
    float areaA;
    float areaB;
    float pibA;
    float pibB; 
    int pontos_turisticosA; 
    int pontos_turisticosB;  
    float densidade_populacionalA;  
    float densidade_populacionalB;  
    float pib_per_capitaA; 
    float pib_per_capitaB;
    float super_poderA;
    float super_poderB;

    // Variáveis para contagem de vitórias
    int vitoriaA = 0;
    int vitoriaB = 0;
    int opcao;
    int atributo1;
    int atributo2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("*** Cadastro de 2 Cartas - Super Trunfo: Países ***\n");

    
    printf("\n--- Cadastro da Carta %d ---\n", cartaA);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidadeA); 

    printf("População: ");
    scanf("%d", &populacaoA);

    printf("Área (km2): ");
    scanf("%f", &areaA);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pibA);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticosA);

    printf("\n--- Cadastro da Carta %d ---\n", cartaB);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidadeB); 

    printf("População: ");
    scanf("%d", &populacaoB);

    printf("Área (km2): ");
    scanf("%f", &areaB);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pibB);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticosB);

    // cálculo da densidade populacional
    densidade_populacionalA = (float) populacaoA / areaA;
    densidade_populacionalB = (float) populacaoB / areaB;

    //cálculo do PIB per capita
    pib_per_capitaA = (float) (pibA * 1000000000) / populacaoA;
    pib_per_capitaB = (float) (pibB * 1000000000) / populacaoB;

    //cálculo do Super Poder
    super_poderA = populacaoA + areaA + pibA + pontos_turisticosA + pib_per_capitaA - densidade_populacionalA;    
    super_poderB = populacaoB + areaB + pibB + pontos_turisticosB + pib_per_capitaB - densidade_populacionalB;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n=== Cartas Cadastradas ===\n");
   
    printf("\nCarta %d:\n", cartaA);
    printf("Estado: %c\n", estadoA);
    printf("Código: %s\n", codigo_cartaA);
    printf("Nome da Cidade: %s\n", cidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticosA);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacionalA);
    printf("PIB per Capita: %.2f reais\n", pib_per_capitaA);
    printf("Super Poder: %.2f\n", super_poderA);
    
    printf("\nCarta %d:\n", cartaB);
    printf("Estado: %c\n", estadoB);
    printf("Código: %s\n", codigo_cartaB);
    printf("Nome da Cidade: %s\n", cidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticosB);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacionalB);
    printf("PIB per Capita: %.2f reais\n", pib_per_capitaB);
    printf("Super Poder: %.2f\n", super_poderB); 

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Escolha de Atributos para Comparação    
    // Exibição do Menu para o Usuário Escolher os Atributos
    printf("\nEscolha os atributos para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");

    // Solicitar o primeiro atributo
    printf("Escolha o primeiro atributo (1-7): ");
    scanf("%d", &atributo1);

    // Solicitar o segundo atributo
    printf("Escolha o segundo atributo (1-7): ");
    scanf("%d", &atributo2);
    
          
    printf("\n=== Compraração de Cartas ===\n");

    // Comparação do primeiro atributo escolhido
    switch (atributo1) {
        case 1: // População
            printf("\nComparando População\n");
            if (populacaoA > populacaoB) {
                printf("Carta %d venceu com População %d\n", cartaA, populacaoA);
                vitoriaA++;
            } else if (populacaoB > populacaoA) {
                printf("Carta %d venceu com População %d\n", cartaB, populacaoB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm População igual.\n");
            }
            break;
            
        case 2: // Área
            printf("\nComparando Área\n");
            if (areaA > areaB) {
                printf("Carta %d venceu com Área %.2f km²\n", cartaA, areaA);
                vitoriaA++;
            } else if (areaB > areaA) {
                printf("Carta %d venceu com Área %.2f km²\n", cartaB, areaB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm Área igual.\n");
            }
            break;
            
        case 3: // PIB
            printf("\nComparando PIB\n");
            if (pibA > pibB) {
                printf("Carta %d venceu com PIB %.2f bilhões de reais\n", cartaA, pibA);
                vitoriaA++;
            } else if (pibB > pibA) {
                printf("Carta %d venceu com PIB %.2f bilhões de reais\n", cartaB, pibB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm PIB igual.\n");
            }
            break;
            
        case 4: // Pontos Turísticos
            printf("\nComparando Pontos Turísticos\n");
            if (pontos_turisticosA > pontos_turisticosB) {
                printf("Carta %d venceu com %d Pontos Turísticos\n", cartaA, pontos_turisticosA);
                vitoriaA++;
            } else if (pontos_turisticosB > pontos_turisticosA) {
                printf("Carta %d venceu com %d Pontos Turísticos\n", cartaB, pontos_turisticosB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm o mesmo número de Pontos Turísticos.\n");
            }
            break;
            
        case 5: // Densidade Populacional
            printf("\nComparando Densidade Populacional\n");
            if (densidade_populacionalA > densidade_populacionalB) {
                printf("Carta %d venceu com Densidade Populacional %.2f hab/km²\n", cartaA, densidade_populacionalA);
                vitoriaA++;
            } else if (densidade_populacionalB > densidade_populacionalA) {
                printf("Carta %d venceu com Densidade Populacional %.2f hab/km²\n", cartaB, densidade_populacionalB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm a mesma Densidade Populacional.\n");
            }
            break;
            
        case 6: // PIB per Capita
            printf("\nComparando PIB per Capita\n");
            if (pib_per_capitaA > pib_per_capitaB) {
                printf("Carta %d venceu com PIB per Capita %.2f reais\n", cartaA, pib_per_capitaA);
                vitoriaA++;
            } else if (pib_per_capitaB > pib_per_capitaA) {
                printf("Carta %d venceu com PIB per Capita %.2f reais\n", cartaB, pib_per_capitaB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm PIB per Capita igual.\n");
            }
            break;
            
        case 7: // Super Pode
            printf("\nComparando Super Poder\n");
            if (super_poderA > super_poderB) {
                printf("Carta %d venceu com Super Poder %.2f\n", cartaA, super_poderA);
                vitoriaA++;
            } else if (super_poderB > super_poderA) {
                printf("Carta %d venceu com Super Poder %.2f\n", cartaB, super_poderB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm o mesmo Super Poder.\n");
            }
            break;
    }

    // Comparação do segundo atributo escolhido
    switch (atributo2) {
        case 1: // População
            printf("\nComparando População\n");
            if (populacaoA > populacaoB) {
                printf("Carta %d venceu com População %d\n", cartaA, populacaoA);
                vitoriaA++;
            } else if (populacaoB > populacaoA) {
                printf("Carta %d venceu com População %d\n", cartaB, populacaoB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm População igual.\n");
            } 
            break;
            
        case 2: // Área
            printf("\nComparando Área\n");
            if (areaA > areaB) {
                printf("Carta %d venceu com Área %.2f km²\n", cartaA, areaA);
                vitoriaA++;
            } else if (areaB > areaA) {
                printf("Carta %d venceu com Área %.2f km²\n", cartaB, areaB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm Área igual.\n");
            }
            break;
            
        case 3: // PIB
            printf("\nComparando PIB\n");
            if (pibA > pibB) {
                printf("Carta %d venceu com PIB %.2f bilhões de reais\n", cartaA, pibA);
                vitoriaA++;
            } else if (pibB > pibA) {
                printf("Carta %d venceu com PIB %.2f bilhões de reais\n", cartaB, pibB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm PIB igual.\n");
            }
            break;
            
        case 4: // Pontos Turísticos
            printf("\nComparando Pontos Turísticos\n");
            if (pontos_turisticosA > pontos_turisticosB) {
                printf("Carta %d venceu com %d Pontos Turísticos\n", cartaA, pontos_turisticosA);
                vitoriaA++;
            } else if (pontos_turisticosB > pontos_turisticosA) {
                printf("Carta %d venceu com %d Pontos Turísticos\n", cartaB, pontos_turisticosB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm o mesmo número de Pontos Turísticos.\n");
            }
            break;
            
        case 5: // Densidade Populacional
            printf("\nComparando Densidade Populacional\n");
            if (densidade_populacionalA > densidade_populacionalB) {
                printf("Carta %d venceu com Densidade Populacional %.2f hab/km²\n", cartaA, densidade_populacionalA);
                vitoriaA++;
            } else if (densidade_populacionalB > densidade_populacionalA) {
                printf("Carta %d venceu com Densidade Populacional %.2f hab/km²\n", cartaB, densidade_populacionalB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm a mesma Densidade Populacional.\n");
            }
            break;
            
        case 6: // PIB per Capita
            printf("\nComparando PIB per Capita\n");
            if (pib_per_capitaA > pib_per_capitaB) {
                printf("Carta %d venceu com PIB per Capita %.2f reais\n", cartaA, pib_per_capitaA);
                vitoriaA++;
            } else if (pib_per_capitaB > pib_per_capitaA) {
                printf("Carta %d venceu com PIB per Capita %.2f reais\n", cartaB, pib_per_capitaB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm PIB per Capita igual.\n");
            }
            break;
            
        case 7: // Super Poder
            printf("\nComparando Super Poder\n");
            if (super_poderA > super_poderB) {
                printf("Carta %d venceu com Super Poder %.2f\n", cartaA, super_poderA);
                vitoriaA++;
            } else if (super_poderB > super_poderA) {
                printf("Carta %d venceu com Super Poder %.2f\n", cartaB, super_poderB);
                vitoriaB++;
            } else {
                printf("Empate! Ambas as cartas têm o mesmo Super Poder.\n");
            }
            break;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    printf("\n=== Resultado Final ===\n");
    printf("Vitórias de Carta %d: %d\n", cartaA, vitoriaA);
    printf("Vitórias de Carta %d: %d\n", cartaB, vitoriaB);

    if (vitoriaA > vitoriaB) {
        printf("Carta %d venceu o jogo!\n", cartaA);
    } else if (vitoriaB > vitoriaA) {
        printf("Carta %d venceu o jogo!\n", cartaB);
    } else {
        printf("Empate no jogo!\n");
    }

    return 0;
}