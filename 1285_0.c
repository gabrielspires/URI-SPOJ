#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
	int i, j;
	int n, m, qtdNumValidos = 0, valido = 1;
	int numRepetido[10] = {0};
	char numero[100];

	while(scanf("%d %d", &n, &m) != EOF){
		for(i=n; i<=m; i++){
			sprintf(numero, "%d", i);
			
			for(j=0; j<strlen(numero); j++){
				if(!numRepetido[numero[j]%10]){
					numRepetido[numero[j]%10] = 1;
				}
				else if(numRepetido[numero[j]%10] == 1){
					valido = 0;
					break;
				}
			}
			if(valido == 1){
				qtdNumValidos++;
			}else{
				valido = 1;
			}
			for(j=0; j<10; j++){
				numRepetido[j] = 0;
			}
		}
		printf("%d\n", qtdNumValidos);
		qtdNumValidos = 0;
	}

	return 0;
}