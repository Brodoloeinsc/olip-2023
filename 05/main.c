#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char sentido[13];
    int i;

    fgets(sentido, 13, stdin);
    
    for(i = 0;i<14;i++){
        sentido[i]=tolower(sentido[i]);
    }

    if(strcmp(sentido, "oposicao") == 10){
        printf("mas\n");
    }else if(strcmp(sentido, "contrariedade") == 10){
        printf("mas\n");
    }else if(strcmp(sentido, "quantidade") == 10){
        printf("mais\n");
    }else if(strcmp(sentido, "intensidade") == 10){
        printf("mais\n");
    }
}