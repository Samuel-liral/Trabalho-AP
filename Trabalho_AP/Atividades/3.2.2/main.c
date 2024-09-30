#include <stdio.h>
#include <string.h>
#include "remove.h"  

int main() {
    int num_testes;
    
    // Lê o número de casos de teste
    scanf("%d", &num_testes);
    
    for (int i = 0; i < num_testes; i++) {
        int b;
        char mensagem[201];  
        
        // Lê o valor de b e a string com a mensagem 
        scanf("%d", &b);
        scanf("%s", mensagem);
        
        int len = strlen(mensagem);
        
        for (int j = 0; j < len; j += 2) {
            int x = (mensagem[j] - '0') * 10 + (mensagem[j + 1] - '0');  // Converte caracteres para decimal
            
            // Chama a função func_val para processar o valor x
            int resultado = func_val(x, b);
            
            // Imprime o caractere correspondente
            if (resultado != 0) {
                printf("%c", resultado);
            }
        }
    }

    printf("\n");  // Pula linha
    return 0;
}
