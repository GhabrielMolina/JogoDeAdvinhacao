#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("\n\n");
    printf(" _______________________________________________________________ \n");
    printf("|         []  ,----.___                                         |\n");
    printf("|       __||_/___      '.            BEM VINDO                  |\n");
    printf("|      / O||    /|       )            AO JOGO                   |\n");
    printf("|     /   ''   / /   =._/               DE                      |\n");
    printf("|    /________/ /                   ADIVINHACAO                 |\n");
    printf("|    |________|/                                                |\n");
    printf("|                                                               |\n");

    int segundos = time(0);     
    srand(segundos);             
    
    int numeroGrande = rand();
    int numerosecreto = numeroGrande % 100;     

    int chute;
    int tentativa = 1;
    float pontos = 1000;
    int acertou = 0;

    int nivel;
        printf("|                   Qual o nivel de dificuldade?                |\n");
        printf("|               (1) Facil    (2) Medio   (3) Dificil            |\n");
        printf("|_______________________________________________________________|\n");
        printf("   Escolha:"); 
        scanf("%d", &nivel);    

    int numTentativas;
    
    switch (nivel){
        case 1:
            numTentativas = 20;
            break;
    
        case 2:
            numTentativas = 15;
            break;
    
        default:
            numTentativas = 8;
            break;
    }
    
    for (int i = 1; i <= numTentativas; i++)
    {
        printf("\n-------------------->   Tentativa %d de %d   <-------------------\n", tentativa, numTentativas);
        
        printf("      Qual e o seu chute?");
        scanf("%d", &chute);
        printf("\n      Seu chute foi %d  ", chute);

        if (chute < 0){
            printf("%%%%%%%%%%    Voce nao pode chutar numeros NEGATIVOS    %%%%%%%%%%\n\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if(acertou){
            break;
        }
        else if (maior){
            printf("& MAIOR que o numero SECRETO\n\n");
        }
        else{
            printf("& MENOR que o numero SECRETO\n\n");
        }

        tentativa++;

        float prontosPerdidos = abs(chute - numerosecreto) / (float)2;
        pontos = pontos - prontosPerdidos;

    }

    if(acertou){
        printf("\n\n");
        printf(" _______________________________________________________________ \n");
        printf("|                                                               |\n");
        printf("|                    Parabens! Voce Ganhou!                     |\n");
        printf("|             Jogue de Novo, Voce e um bom Jogador              |\n");
        printf("|_______________________________________________________________|\n");
        printf("                 Voce Acertou em %d Tentativas!\n", tentativa);
        printf("                     Total de Pontos: %.1f\n", pontos);
    }
    else{
        printf("\n                     Fim de Jogo!\n\n");
        printf(" _____                         _____                         \n");
        printf("/ ____|                       / ___ \\                       \n");
        printf("| |  __  __ _ _ __ ___   ___  | |  | |_   _____ _ __         \n");
        printf("| | |_ |/ _` | '_ ` _ \\ / _ \\ | |  | \\ \\ / / _ \\ '__|   \n");
        printf("| |__| | (_| | | | | | |  __/ | |__| |\\ V /  __/ |          \n");
        printf("\\______|\\__,_|_| |_| |_|\\___| \\_____/  \\_/ \\___|_|     \n\n");
        printf("_____________________JOGUE NOVAMENTE!!___________________\n\n");
                                                                                                                                               
    }
}


// CODE BY GHABRIEL MOLINA