#include <stdio.h>

int main(){
	
	float n[4], media, exame = 0;
	int i;
	
	for(i = 0;i < 4;i++){
	scanf("%f",&n[i]);
	}
	
	media = (n[0]*2 + n[1]*3 + n[2]*4 + n[3]*1)/10;	

	if(media >= 5 && media <= 6.9){
		scanf("%f",&exame);
		printf("Media: %.1f\n",media);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1f\n",exame);
		
		if(((media+exame)/2) >= 5){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n",(media+exame)/2);
		}
	} else if (media >6.9){
		printf("Media: %.1f\n",media);
		printf("Aluno aprovado.\n");
	} else{
		printf("Media: %.1f\n",media);
		printf("Aluno reprovado.\n");		
	}
	
	
	
	
	
	return 0;
}