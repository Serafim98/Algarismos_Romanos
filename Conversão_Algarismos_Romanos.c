#include <stdio.h>
#include <string.h>

int Converte(char *Str, int tam){
	int i=tam-1, soma=0;
	
	while(i>=0){
		switch(*(Str+i)){
			case 'I': if(*(Str+i+1)=='\0')
						soma+= 1;
					  else soma-= 1;
					  break; 
			case 'V': soma += 5;   break;
			case 'X': soma+= 10;   break;
			case 'L': soma+= 50;   break;
			case 'C': soma+= 100;  break;
			case 'D': soma+= 500;  break;
			case 'M': soma+= 1000; break;
		}
		i--;
	}
	return(soma);
}

int main(void){
	char Str[50];
	printf("Insira um número em algarismos Romanos, tudo maiúsculo ");
	scanf("%[^\n]", Str);
	int tam;
	tam = strlen(Str);
	printf("%d", Converte(Str, tam));
	return(1);	
}
