#include <stdio.h>
#include <limits.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    unsigned char u_char = 255;  // M�ximo valor 
    
    printf("�ltimo valor de unsigned char: %u\n", u_char);
    
    u_char++;  // +1
    
    printf("Valor ap�s acrescentar al�m do limite: %u\n", u_char);  // A� da overflow
    
    return 0;
}

