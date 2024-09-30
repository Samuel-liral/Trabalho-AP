#include <stdio.h>

int main() {
    
    float N1, N2, PPD, EU, N3, notaFinal;
    int fezEU, fezN3;

    
    printf("Nota da N1: ");
    scanf("%f", &N1);
    
    if (N1 < 0 || N1 > 4.5) {
    	
        printf("ERRO 3 \n");
        
        return 0;
    }

    printf("Nota da N2: ");
    scanf("%f", &N2);
    
    if (N2 < 0 || N2 > 4.5) {
    	
        printf("ERRO 3 \n");
        
        return 0;
    }

    printf("Nota da PPD: ");
    scanf("%f", &PPD);
    
    if (PPD < 0 || PPD > 1) {
    	
        printf("ERRO 3 \n");
        
        return 0;
    }

    
    printf("Realizou o Exame Unificado? (1 = sim)(0 = nao)");
    scanf("%d", &fezEU);
    
    if (fezEU == 1) {
    	
        printf("Nota do Exame Unificado: ");
        scanf("%f", &EU);
        
        if (EU < 0 || EU > 1) {
        	
            printf("ERRO 3 \n");
            
            return 0;
        }
    } else {
        EU = 0; 
    }

   
    printf("Fez a N3? (1 = sim)(0 = nao): ");
    scanf("%d", &fezN3);
    
    if (fezN3 == 1) {
    	
        printf("Nota da N3: ");
        scanf("%f", &N3);
        
        if (N3 < 0 || N3 > 4.5) {
        	
            printf("ERRO 3 \n");
            
            return 0;
        }

        if (N1 < N2) {
        	
            N1 = N3;
            
        } else {
        	
            N2 = N3;
        }
    }
    
    notaFinal = N1 + N2 + PPD + EU;  

   
    if (notaFinal > 10) {
    	
        notaFinal = 10;  
    }

    
    printf("Nota final: %.2f\n", notaFinal);
    
    if (notaFinal >= 7.0) {
    	
        printf("Aprovado!\n");
        
    } else {
    	
        printf("Reprovado!\n");
    }

    return 0;
}
