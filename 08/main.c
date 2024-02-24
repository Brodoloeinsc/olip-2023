#include <stdio.h>

int main(){
	int N,P,i,s=0;
	
	scanf("%d",&N);
	
	if(N<2 && N>10*10*10*10*10*10*10*10*10)
		return 0;
		
	for(i=0;i<N;i++){
		
		scanf("%d",&P);
		
		if(P<2 && P>10*10*10*10*10*10)
			return 0;
		
		else
			s+=P;
	}
	
	s/=N;
	printf("%d",s);
	return 0;
}

