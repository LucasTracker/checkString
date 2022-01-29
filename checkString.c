#include <ctype.h>
#include <stdio.h>

void main(void){
	size_t ch;
	
	/*Esse programa verifica cada caractere lido
	 *E retorna se é um alfanúmerico ou não
	 *Ele finaliza assim que recebe um espaco no  stdin*/
	for(;;){
		ch = getc(stdin);
		if(ch==0x20) break; // verifica se o teclado digitou o espaço
		if(isalnum(ch))
			puts("eh um alfanumerico");
	}
}
