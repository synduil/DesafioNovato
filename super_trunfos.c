#include <stdio.h>

int main(){
    //carta:1//
    char Estado;
    char Codigo[5];                      //Primera etapa, montando os dados principais do jogo//
    char Cidade[19];
    int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;

    printf("Digite o Estado: ");         //Adquirindo informações com o scanf//
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

    printf("Carta: 1\n");
    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);                        //e finalmente ultilizando o printf para demonstrar todos as informações preenchidas//
    printf("Cidade: %s\n", Cidade);
    printf("Populacao: %i\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %f\n", PIB);
    printf("Pontos Turisticos: %d\n", PontosTuristicos);

    return 0;
}

   