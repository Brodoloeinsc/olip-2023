#include <stdio.h>

int main() {

    int jogo[3][3], i, j, k, response = 0, vetor[9];

    for(i = 0; i < 3; i++) {
        scanf("%d %d %d", &jogo[i][0], &jogo[i][1], &jogo[i][2]);
        if(jogo[i][0] > 8 || jogo[i][1] > 8 || jogo[i][2] > 8) {
            return 0;
        }else if(jogo[i][0] < 0 || jogo[i][1] < 0 || jogo[i][2] < 0) {
            return 0;
        }
    }

    for(j = 0; j < 3; j++) {
        for(k = 0; k < 3; k++) {
            if(j == 0) vetor[k] = jogo[j][k];
            else if( j == 1 ) vetor[2+k] = jogo[j][k];
            else if( j == 2 ) vetor[5+k] = jogo[j][k];
        } 
    }

    
    
    return 0;

}



