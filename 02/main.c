#include <stdio.h>

int main(){
    int x, y, z, pitagoras, aret, acirc, area, raio;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    pitagoras = (y*y) + (z*z);

    if((x*x)!=pitagoras){
        printf("Nao eh retangulo");

    }else{
        aret = (y * z) /2 ;
        raio = z/2;
        acirc = (3*(raio*raio))/2;
        area = acirc+aret;
        printf("AREA = %d", area);
    }
}