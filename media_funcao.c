    #include <stdio.h>
    #include <stdlib.h>

    float media(float nota1, float nota2);
    //cabeçalhos das funções em cima para evitar conflitos de ordem de compilação
    int main(){
        char nome[41];
        float nota1, nota2;

        system("clear");

        printf ("Digite o seu nome: \n");
        scanf("%[^\n]", nome);// ler té encontrar um \n
        fflush(stdin);//limpar o buffer do teclado

        printf ("Digite a nota 1:");
        scanf("%f", &nota1); //ler float & coloca no endereço da variável
        fflush(stdin);

        printf ("Digite a nota 2:");
        scanf("%f", &nota2);
        fflush(stdin);

        printf("%s, sua média aritmética é: %.2f \n", nome, media(nota1, nota2));
        return 0;
    }
    float media(float nota1, float nota2){
        float media = ((nota1+nota2)/2);
        return media; 
        //%.2f formata com 2 casas o float
    };