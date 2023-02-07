#include <stdio.h>
#include <stdlib.h>

#define TAM 20

procurar( int valores[], int valor);

int main(){
    int valor;
    int valores [TAM] = {0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95};
    printf("digite um valor a ser procurado: ");
    scanf("%d", &valor);

    int procurado = procurar(valores, valor);

    if(procurado == -1){
        printf("O valor procurado não se encontra no vetor \n");
    }else{
        printf("O valor procurado está no índice: %d\n", procurar(valores, valor));
    }
}

int procurar(int valores[], int valor){
    int i;
    for(i=0; i<TAM; i++){
        if( valor == valores[i]){
            return i;
        }
    }
    return -1;
}