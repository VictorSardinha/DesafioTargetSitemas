#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {

    char user [100];
    printf("Digite algo\n");
    scanf("%s",&user);
  
    for  ( int i = strlen(user); i > 0; i--){   
        printf("%c",user[i-1]);   

    }
}