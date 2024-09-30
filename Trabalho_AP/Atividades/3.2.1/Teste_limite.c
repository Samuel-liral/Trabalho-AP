#include <stdio.h>
#include <limits.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    unsigned char u_char = 255;  // Máximo valor 
    
    printf("Último valor de unsigned char: %u\n", u_char);
    
    u_char++;  // +1
    
    printf("Valor após acrescentar além do limite: %u\n", u_char);  // Aí da overflow
    
    return 0;
}

