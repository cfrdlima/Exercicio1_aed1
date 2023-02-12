#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
    void start(){
        int numeros[1000];
        srand(time(NULL));
        int entrada;
        for(int i=0;i<1000;i++){
            numeros[i] = rand() % 3000;
        }
        void opcao1(){
            int maior=0;
            for(int i=0;i<1000;i++){
                if(numeros[i]>maior){
                    maior=numeros[i];
                }
            }
            printf("O maior numero e: [%d]\n\n", maior);
        }
        void opcao2(){
            int pares=0;
            printf("Os Numeros pares sao: \n");
            printf("[%d]",numeros[0]);
            for(int i=1;i<1000;i++){
                if((numeros[i] % 2 == 0)){
                    printf(",[%d]",numeros[i]);
                }
            }
            printf("\n\n");
        }
        void opcao3(){
            int inversa[1000];
            int contador=0;
            for(int i=1000;i<0;i--){
                inversa[contador]=numeros[i];
                contador++;
            }
                numeros[1000]=inversa[1000];    
                printf("O conteúdo do vetor foi invertido!\n\n");
        }
        void opcao4(){
            printf("Vetores: \n");
            for(int i=0;i<1000;i++){
                printf("[%d]", numeros[i]);
            }
            printf("\n\n");
        }
        void opcaoinvalida(){
            printf("Digite uma opcao valida!\n\n");
        }
        do{
            printf("Opcao 1 - Imprima o maior numero e sua respectiva posicao no vetor. \n");
            printf("Opcao 2 - Imprima todos os números pares do vetor.\n");
            printf("Opcao 3 - Inverter os valores no próprio vetor.\n");
            printf("Opcao 4 - Imprimir o vetor.\n");
            printf("Opcao 5 - Sair.\n\n");
            
            printf("Digite a opcao desejada: ");
            scanf("%d", &entrada);
            if(entrada==1){
                opcao1();
            }else if(entrada==2){
                opcao2();
            }else if(entrada==3){
                opcao3();
            }else if(entrada==4){
                opcao4();
            }else if(entrada<1 || entrada>5){
                opcaoinvalida();
            }
        }while(entrada!=5);
    }
    int main(){
        start();
    }
        
    