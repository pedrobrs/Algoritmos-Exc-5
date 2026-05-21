#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int vogais = 0;

    printf("Digite uma palavra ou frase: ");
    fgets(texto, sizeof(texto), stdin);

    for(int i = 0; texto[i] != '\0'; i++) {

        char c = texto[i];

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {

            vogais++;
        }
    }

    printf("Quantidade de vogais: %d\n", vogais);

    return 0;
}