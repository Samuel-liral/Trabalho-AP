#include <math.h>  
#include "remove.h" 

int func_val(int x, int b) {
    if (b == 0) {
        return 0;  // Evita a divis�o por zero
    }

    double resultado = (double)x / b;
    int arredondado = (int)round(resultado);  // Arredonda

    if (arredondado == 0) {
        return 0;  // Ignora se for zero
    }

    return arredondado; 
}

