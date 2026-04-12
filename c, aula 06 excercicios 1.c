// Crie a função triplo em C, que recebe um número inteiro e
//retorna o tripo do valor recebido.
//Crie um programa em C que recebe um número do usuário
//e mostra o tripo usando a função criada anteriormente.

#include <stdio.h> 

int triplo(int x); 


int main (void) {
    int x;
    int resultado = triplo (x);
    printf("digite um valor:" );
    scanf("%d", &x);
    printf("Resultado: %d", resultado = triplo (x)  );
    return 0;
}

int triplo(int x) {
    return x * 3;
}
