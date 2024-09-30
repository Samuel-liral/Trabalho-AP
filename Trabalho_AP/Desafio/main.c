#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"  // declara��o da fun��o

int main() {
    int vezes, i, length, j, decimal, b;
    char hexadecimal[501];
    char dupla[3];  // Armazena pares de caracteres hexadecimais
    
    printf("Quantas mensagens voce quer decifrar? ");
    scanf("%d", &vezes);
    
    printf("Insira a variavel b: ");
    scanf("%d", &b);

    for (i = 0; i < vezes; i++) {
        printf("Insira a mensagem hexadecimal a ser codificada: ");
        scanf("%s", hexadecimal);

        length = strlen(hexadecimal);

        // Junta os pares de caracteres na string hexadecimal
        for (j = 0; j < length; j += 2) {
            // Para n�o acessar fora do alcance da string
            if (j + 1 < length) {
                dupla[0] = hexadecimal[j];    
                dupla[1] = hexadecimal[j + 1]; 
                dupla[2] = '\0';               

                // Converte para decimal
                decimal = strtol(dupla, NULL, 16);

                // Verifica o resultado da fun��o 
                if (func_val((j / 2) + 1, b) != 0) {
                    printf("%c", decimal);
                }

                // Interrompe caso seja 0
                if (decimal == 0) {
                    break;
                }
            }
        }

        printf("\n\n");  // Pula uma linha 
    }

    return 0;
}


