#include <stdio.h>

int main() {
    char jogador1[50], jogador2[50];
    int carta1, carta2;
    int juiz;

    
    //Nomes dos jogadores
    printf ("Digite seu nome de jogador: ");
    scanf ("%49s", jogador1);
    printf ("Digite seu nome de jogador: ");
    scanf ("%49s", jogador2);
    
    printf ("Como queremos um jogo justo, teremo um Juiz\nele tera que decidir quais atributos serão\ncomparados\n");
    printf ("1. Comparar a população\n2. Comparar a área\n3. Comparar a altitude\n");
    printf ("Escolha com sabedoria: ");
     scanf ("%d", &juiz);

    //Cidades e atributos 
    char nome[][50] = {"0","Fortaleza", "Curitiba", "Londrina", "Pinhais", "Cascavel"};
    int populacao[] = {0,2428678, 1773718, 555937, 135500, 348051};
    double area[] = {0,312.353, 430.901, 1650.808, 60.896, 2100.103};
    int altitude[] = {0,16, 934, 610, 900, 781};
    
    
    //Cartas disponiveis
    printf(" escolha uma carta. Cartas disponiveis: \n");
    for (int i = 1; i < 6; ++i){
        printf ("%d - %s\n", i, nome[i]);
    }
        
    //Escolhas
    printf (" Escolha sua carta 1 - 5 %s\n", jogador1);
    scanf ("%d", &carta1);
    
    printf (" Escolha sua carta 1 - 5 %s\n", jogador2);
    scanf ("%d", &carta2);
    
    //Informaçoes das cartas escolhidas
    printf ("%s\n escolheu %s\n", jogador1, nome[carta1]);
    printf ("Populacao: %d\n", populacao[carta1]);
    printf ("Área: %f\n", area[carta1]);
    printf ("Altitude: %d\n", altitude[carta1]);
    
    printf ("%s\n escolheu %s\n", jogador2, nome[carta2]);
    printf ("Populacao: %d\n", populacao[carta2]);
    printf ("Área: %f\n", area[carta2]);
    printf ("Altitude: %d\n\n", altitude[carta2]);
    
  
   // Escolha de Comparação
    switch (juiz){
    case 1:
        printf ("Vamos comparar a população\n");
        printf ("A população de %s é de %d e a população de %s é de %d\n", nome[carta1], populacao[carta1],
        nome[carta2], populacao[carta2]);

        if (populacao[carta1] > populacao[carta2]) {
            printf ("%s Ganhou, parabéns!\n", jogador1);
        } else if (populacao[carta1] < populacao[carta2]) {
            printf ("%s Ganhou, parabéns!\n", jogador2);
        } else {
            printf ("Empate!\n");
        }
        break;

    case 2:
        printf ("Vamos comparar a área\n");
        printf ("A área de %s é de %.2f km² e a de %s é de %.2f km²\n", nome[carta1], area[carta1], nome[carta2], area[carta2]);

        if (area[carta1] > area[carta2]) {
            printf ("%s Ganhou, parabéns!\n", jogador1);
        } else if (area[carta1] < area[carta2]) {
            printf ("%s Ganhou, parabéns!\n", jogador2);
        } else {
            printf ("Empate!\n");
        }
        break;

    case 3:
        printf ("Vamos comparar a altitude\n");
        printf ("A altitude de %s é de %d m e a de %s é de %d m\n", nome[carta1], altitude[carta1], nome[carta2], altitude[carta2]);

        if (altitude[carta1] > altitude[carta2]) {
            printf ("%s Ganhou, parabéns!\n", jogador1);
        } else if (altitude[carta1] < altitude[carta2]) {
            printf ("%s Ganhou, parabéns!\n", jogador2);
        } else {
            printf ("Empate!\n");
        }
        break;

    default:
        printf("Opção inválida!\n");
        break;
}

    
    return 0;
    }