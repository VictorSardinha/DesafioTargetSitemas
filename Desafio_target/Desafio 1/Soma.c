#include <stdio.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL,"Portuguese");

    int INDICE = 13, SOMA = 0, K = 0;
    
    while (K < INDICE) { 
        K = K + 1;
        SOMA = SOMA + K;  
    }
    
    printf("Resultado: ""%d", SOMA);

 return 0;

}
