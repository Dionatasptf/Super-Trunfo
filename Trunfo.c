#include <stdio.h>

int main() {
    char jogador1[50], jogador2[50];
    int carta1, carta2;

    
    //Nomes dos jogadores
    printf ("Digite seu nome de jogador: ");
    scanf ("%49s", jogador1);
    printf ("Digite seu nome de jogador: ");
    scanf ("%49s", jogador2);

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
    
    // Comparação dos valores e resultado
    if (area[carta1] > area[carta2])
    {
    printf ("%s é superior pois tem %f km² e %s %f km²\n", nome[carta1], area[carta1], nome[carta2], area[carta2]);
    printf ("%s Parabéns você venceu!\n", jogador1);
    
    }else if (area [carta1] < area [carta2])
    {
    printf ("%s é superior pois tem %f km² e %s %f km²\n", nome[carta2], area[carta2], nome[carta1], area[carta1]);
    printf ("%s Parabéns você venceu! ", jogador2);
    
    }else {
    printf ("As áreas são iguais\n");
    }
    
    return 0;
    }