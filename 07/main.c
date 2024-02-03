#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char data[5], dia[2], mes[2], signo[30];
    int i, dia_int, mes_int;

    fgets(data, 5, stdin);
    fflush(stdin);

    for(i= 0;i<6;i++){
        if(i<2){
            dia[i] = data[i];
        }else if(i > 2 && i < 5){
            mes[i-3] = data[i];
        }
    }

    dia_int = atoi(dia);
    mes_int = atoi(mes);

    printf("%d\n%d",dia_int,mes_int);

    if(mes_int == 1){
        if(dia_int<=19){
            strcpy(signo, "capricornio");
        }else if(dia_int < 31){
            strcpy(signo, "aquario");
        }
    }else if(mes_int == 2){
        if(dia_int<=18){
            strcpy(signo, "aquario");
        }else if(dia_int < 29){
            strcpy(signo, "peixes");
        }
    }else if(mes_int == 3){
        if(dia_int<=20){
            strcpy(signo, "peixes");
        }else if(dia_int < 31){
            strcpy(signo, "aries");
        }
    }else if(mes_int == 4){
        if(dia_int<=20){
            strcpy(signo, "aries");
        }else if(dia_int < 30){
            strcpy(signo, "touro");
        }
    }else if(mes_int == 5){
        if(dia_int<=20){
            strcpy(signo, "touro");
        }else if(dia_int < 31){
            strcpy(signo, "gemeos");
        }
    }else if(mes_int == 6){
        if(dia_int<=20){
            strcpy(signo, "gemeos");
        }else if(dia_int < 30){
            strcpy(signo, "cancer");
        }
    }else if(mes_int == 7){
        if(dia_int<=22){
            strcpy(signo, "cancer");
        }else if(dia_int < 31){
            strcpy(signo, "leao");
        }
    }else if(mes_int == 8){
        if(dia_int<=22){
            strcpy(signo, "leao");
        }else if(dia_int < 31){
            strcpy(signo, "virgem");
        }
    }else if(mes_int == 9){
        if(dia_int<=22){
            strcpy(signo, "virgem");
        }else if(dia_int < 30){
            strcpy(signo, "libra");
        }
    }else if(mes_int == 10){
        if(dia_int<=22){
            strcpy(signo, "libra");
        }else if(dia_int < 31){
            strcpy(signo, "escorpiao");
        }
    }else if(mes_int == 11){
        if(dia_int<=21){
            strcpy(signo, "escorpiao");
        }else if(dia_int < 30){
            strcpy(signo, "sagitario");
        }
    }else if(mes_int == 12){
        if(dia_int<=21){
            strcpy(signo, "sagitaio");
        }else if(dia_int < 31){
            strcpy(signo, "capricornio");
        }
    }

    printf("%s", signo);
}