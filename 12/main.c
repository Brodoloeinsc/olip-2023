#include <stdio.h>

int main() {

    int i, j,c, dados[1000][1000];
    float probabilidade = 0;

    scanf("%d", &c);

    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &dados[i][j]);
        }       
    }

    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            if(j == 0){
                probabilidade = (float)dados[i][j];
            }else{
                probabilidade *= (float)dados[i][j];
            }
        }       
        probabilidade = (float)1/probabilidade;             
        printf("%f\n", probabilidade);
    }    

    return 0;
}