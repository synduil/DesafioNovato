#include <stdio.h>

int main(){
    //carta:1//
    char Estado;
    char Codigo[10];                      //Primera etapa, montando os dados principais do jogo//
    char Cidade[30];
    int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;
    // pegando informações para carta 1//
    printf("Digite o Estado: ");                      //Adquirindo informações com o scanf//
    scanf("%c", &Estado);

    printf("Digite o Codigo: ");
    scanf("%s", Codigo);

    printf("Digite a Cidade: ");
    scanf("%s", Cidade);

    printf("Digite a Populacao: ");
    scanf("%i", &Populacao);

    printf("Digite a Area: ");
    scanf("%f", &Area);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &PontosTuristicos);
     //Saida da carta 1//
    printf("Carta: 1\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);                        //e finalmente ultilizando o printf para demonstrar todos as informações preenchidas//
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %i\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);

    //Carta 2 //

    char Estado2;
    char Codigo2[10];
    char Cidade2[30];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;
    // Informações da carta 2 //

    printf("Digite o Estado: ");
    scanf(" %c", &Estado2);

    printf("Digite o Codigo: ");
    scanf("%s", Codigo2);

    printf("Digite a Cidade: ");
    scanf("%s", Cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &Populacao2);

    printf("Digite a Area: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &PontosTuristicos2);

    //Saida de informações//

    printf("Carta 2:\n");
    printf("Estado:%c\n", Estado2);
    printf("Codigo:%s\n", Codigo2);
    printf("Cidade:%s\n", Cidade2);
    printf("Populaçao:%d\n", Populacao2);
    printf("Area:%2f\n", Area2);
    printf("Pib:%2f\n", PIB2);
    printf("Pontos Turisticos:%d\n", PontosTuristicos2);

    return 0;
    
}

   