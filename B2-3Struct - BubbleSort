#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 50
#define TAMANHO_NOME 50

typedef struct {
    char nome[TAMANHO_NOME];
    double nota;
} Aluno;

void incluirAluno(Aluno alunos[], int *qtd) {
    if (*qtd >= MAX_ALUNOS) {
        printf("Número máximo de alunos atingido.\n");
        return;
    }

    printf("Nome do aluno: ");
    scanf(" %[^\n]", alunos[*qtd].nome);

    printf("Nota do aluno: ");
    scanf("%lf", &alunos[*qtd].nota);

    (*qtd)++;
}

void ordenarAlunosPorNome(Aluno alunos[], int qtd) {
    for (int i = 0; i < qtd - 1; i++) {
        for (int j = 0; j < qtd - i - 1; j++) {
            if (strcmp(alunos[j].nome, alunos[j + 1].nome) > 0) {
                Aluno temp = alunos[j];
                alunos[j] = alunos[j + 1];
                alunos[j + 1] = temp;
            }
        }
    }
}

void listarAlunos(Aluno alunos[], int qtd) {
    ordenarAlunosPorNome(alunos, qtd);

    printf("\nLista de alunos:\n");
    for (int i = 0; i < qtd; i++) {
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota: %.2lf\n", alunos[i].nota);
        printf("Situação: %s\n", alunos[i].nota >= 6.0 ? "Aprovado\n" : "Reprovado\n");
    }
}

void menu() {
    Aluno alunos[MAX_ALUNOS];
    int qtdAlunos = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Incluir aluno\n");
        printf("2. Listar alunos\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                incluirAluno(alunos, &qtdAlunos);
                break;
            case 2:
                listarAlunos(alunos, qtdAlunos);
                break;
            case 3:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 3);
}

int main() {
    menu();
    return 0;
}
