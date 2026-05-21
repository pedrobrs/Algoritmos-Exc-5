#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Remove o ENTER do final
    nome[strcspn(nome, "\n")] = '\0';

    int tamanho = strlen(nome);

    printf("Quantidade de letras: %d\n", tamanho);
    printf("Primeira letra: %c\n", nome[0]);
    printf("Ultima letra: %c\n", nome[tamanho - 1]);

    return 0;
}