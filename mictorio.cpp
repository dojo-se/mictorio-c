#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//A entrada esperada é uma sequencia de 'x' e 'o' onde 'x' é ocupado e 'o' é vazio

void mictorio(char* s){
	int tamanho,i=0;
	tamanho=strlen(s);
	for(i=0;i<tamanho;i++){
		if(i==0){
			if (s[i]=='o'&&s[i+1]=='o') printf("0 ");
			s[i]='x';
		}
		else if(i==tamanho-1){
			if (s[i-1]=='o'&&s[i]=='o') {
				printf("%d ",i);
				s[i]='x';
			}
		}
		else{
			if (s[i]=='o'&&s[i-1]=='o'&&s[i+1]=='o') {
				printf("%d ",i);
				s[i]='x';
			}
			
		}
	}
	return;
}



//A entrada esperada é uma sequencia de 'x' e 'o' onde 'x' é ocupado e 'o' é vazio
int main(){
	char mictorios[100];
	printf("Digite a entrada (sequencia de 'x' e 'o' onde 'x' eh ocupado e 'o' eh vazio\n");
	scanf("%s", mictorios);
	mictorio(mictorios);
	return 0;
}
