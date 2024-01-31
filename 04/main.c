#include <stdio.h>
#include <string.h>

int main(){
    char sofa[4];
    int i;

    fgets(sofa, 4, stdin);
    
    for(i = 0;i<3;i++){
        if(sofa[i]=='L'&&i==2){
            printf("Esse eh o meu lugar");
        }else if(i==2){
            printf("Oi Leonard");
        }
    }

}