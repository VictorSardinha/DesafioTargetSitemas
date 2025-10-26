#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL,"Portuguese");

    int  num, fib1 = 0, fib2 = 1, resultado;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    while (fib2 < num) {
        resultado = fib2; 
        fib2 = fib1 + fib2;
        fib1 = resultado;
    
    }
  
  if (fib2 == num || num == 0)
    printf("%d pertence á sequência de Fibonacci.\n",num);
  else
    printf("%d Não pertence á sequência de Fibonacci.\n",num);

  return 0;
}