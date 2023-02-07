#include <stdio.h>
#include <stdlib.h>

#define TAM 20

int buscaBinaria(int valores[], int valor, int inicio, int final);

int main(){
    int valor;
    int valores [TAM] = {0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95};
    int inicio = 0;
    int final = TAM-1;

    printf("digite um valor a ser procurado: ");
    scanf("%d", &valor);

    printf("%d\t %d\t %d\n", valor, inicio, final);

    int indice = buscaBinaria(valores, valor, inicio, final);

    (indice == -1)
        ?printf("Elemento não presente no array")
        :printf("Elemento encontrado na posicao %d\n", indice);
    return 0;
}

int buscaBinaria(int valores[], int valor, int inicio, int final){

    if(final >= inicio){
        int meio = inicio + (final - inicio)/2;

        if (valores[meio] == valor){
            return meio;
        } else if (valores[meio] < valor){
            return buscaBinaria(valores, valor, meio + 1, final);
        } else if (valores[meio] > valor){
            return buscaBinaria(valores, valor, inicio, meio - 1);
        } else {
            return -1;
        }
    } else {
        return -1;
    }

}