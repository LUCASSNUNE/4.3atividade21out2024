#include <stdio.h>
#include <math.h>

int main() {

    char operacao;
    int numero1;
    int numero2;
    int soma;
    //PEDINDO
 
    printf("INFORME A OPERCAO :  ");
    scanf("%c", &operacao);

    printf("INFORME O PRIMEIRO NUMERO : ");
    scanf("%d", &numero1);

    printf("INFORME O SEGUNDO NUMERO : ");
    scanf("%d", &numero2);
    
    //PRIMERO CASO
    if(operacao =='+'){
    soma = numero1 + numero2;
    printf("%d" ,soma);
    }
    //SEGUNDO CASO
    else if(operacao =='-'){
    soma = numero1 - numero2;
    printf("%d" ,soma);
    }
    //TERCEIRO CASO
    else if(operacao =='*'){
    soma = numero1 * numero2;
    printf("%d" ,soma);
    }
    //QUARTO CASO
    else{
    soma = numero1 / numero2;
    printf("%d" ,soma);
    }
    
}