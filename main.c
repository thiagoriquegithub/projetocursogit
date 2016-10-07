#include <stdio.h>

void printcolor(char* msg, int color) {
	printf("\033[22;%dm %s \033[0m\n", color, msg);
}

int main() {
	printcolor("Imprime amarelo!", 33);
	printcolor("Imprime azul!", 34);
}