#include <stdio.h>
#include <string.h>

int main() {

    char sentence[100];
    printf("Digite a frase: ");
    fgets(sentence, 100, stdin);

    int words = 1;
    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] != ' ' && sentence[i+1] == ' ')
            words++;
    }
    printf("Ha %d palavras.\n", words);

    return 0;
}
