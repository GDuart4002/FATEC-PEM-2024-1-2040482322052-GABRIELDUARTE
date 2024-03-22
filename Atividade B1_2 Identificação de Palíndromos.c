#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(char *text) {
    int length = strlen(text);
    // Remover o caractere de quebra de linha, se presente
    if (text[length - 1] == '\n') {
        text[length - 1] = '\0';
        length--;
    }
    for (int i = 0; i < length / 2; i++) {
        if (tolower(text[i]) != tolower(text[length - i - 1])) {
            return 0; // Não é um palíndromo
        }
    }
    return 1; // É um palíndromo
}

int is_article_or_preposition(char *word) {
    char *articles[] = {"a", "an", "the"};
    char *prepositions[] = {"on", "in", "at", "to", "with", "by", "for", "of", "off", "up", "down", "over", "under", "around", "before", "after"};
    
    for (int i = 0; i < sizeof(articles) / sizeof(articles[0]); i++) {
        if (strcmp(word, articles[i]) == 0) {
            return 1; // É um artigo
        }
    }

    for (int i = 0; i < sizeof(prepositions) / sizeof(prepositions[0]); i++) {
        if (strcmp(word, prepositions[i]) == 0) {
            return 1; // É uma preposição
        }
    }

    return 0; // Não é nem artigo nem preposição
}

int main() {
    char sentence[1000];
    printf("Digite uma frase: ");
    fgets(sentence, sizeof(sentence), stdin);

    int is_palindrome_sentence = is_palindrome(sentence);

    char *token = strtok(sentence, " ,.-\n");
    printf("Palíndromos encontrados (sem artigos e preposições):\n");
    while (token != NULL) {
        if (!is_article_or_preposition(token) && is_palindrome(token)) {
            printf("%s\n", token);
        }
        token = strtok(NULL, " ,.-\n");
    }

    if (is_palindrome_sentence) {
        printf("A frase é um palíndromo!\n");
    } else {
        printf("A frase não é um palíndromo.\n");
    }

    return 0;
}
