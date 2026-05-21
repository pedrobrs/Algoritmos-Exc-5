#include <stdio.h>
#include <string.h>
#include <ctype.h>

void maiuscula(char str[]) {

    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {

    char texto[100];

    printf("Digite uma palavra: ");
    fgets(texto, sizeof(texto), stdin);

    // Remove ENTER
    texto[strcspn(texto, "\n")] = '\0';

    maiuscula(texto);

    printf("Texto em maiusculo: %s\n", texto);

    return 0;
}