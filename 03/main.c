#include <stdio.h>
#include <math.h>

float descobre_altura(float a, float b, float c, int tipo);

int main(){
    int tipo;
    float a, b, c, area, h;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(1<a>2023 || 1<b>2023 || 1<c>2023){
        return 0;
    }else{
        if(a != b && b != c){
            // Escaleno
            tipo = 3;
            h = descobre_altura(a,b,c,tipo);
            area=h;
        }else if(a==b && b==c){
            // Equilátero
            tipo = 1;
            h = descobre_altura(a,b,c,tipo);
            area=a*h/2;
        }else{
            // Isoceles
            tipo = 2;
            h = descobre_altura(a,b,c,tipo);
            if(a==b){
                area = (c*h)/2;
            }else if (b==c){
                area = (a*h)/2;
            }else if(c==a){
                area = (b*h)/2;                
            }   
        }

        printf("%.3f m2", area);
    }
}   

float descobre_altura(float a,float b,float c,int tipo)
{
	float altura;
	float perimetro;

	if(tipo == 1)
	{
		altura = (a * sqrt(3)) / 2;
	}
	else if(tipo == 2)
	{
		if(a == b)
		{
			altura = sqrt(pow(a,2) - pow(c,2) / 4);
		}
		else if(a == c)
		{
			altura = sqrt(pow(a,2) - pow(b,2) / 4);
		}
		else
		{
			altura = sqrt(pow(b,2) - pow(a,2) / 4);
		}
	}
	else
	{
        // Errado e precisa ser concertado ainda
		perimetro = a + b + c;
		altura = sqrt(perimetro * (perimetro - a) * (perimetro - b) * (perimetro - c));
	}

	return(altura);
}