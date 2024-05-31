#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LISTA 50
#define MAX_NOME 25
#define MAX_DESC 50

typedef struct {
  int id;
  int quant;
  char nome[MAX_NOME];
  char descricao[MAX_DESC];
  float precoUnit;
} Produto;

void menuProduto(Produto *lista, int *numProduto);
void compraSimulator(Produto *lista, int tam);
void inserirLista(Produto *lista, int *numProduto);
void listarProdutos(Produto *lista, int tam);
Produto* checkProduto(Produto *lista, int tam);
void compra(Produto *selecionado, Produto *carrinho, int *quantCar);
void exibirCarrinho(Produto *carrinho, int tam);
void bubbleSort(Produto *lista, int tam);
void formatarString(char *inputStr);

int main(void)
{
  Produto lista[MAX_LISTA];
  int numProduto = 0;
  menuProduto(lista, &numProduto);
  return 0;
}

void menuProduto(Produto *lista, int *numProduto) {
  int opcao = 0;
  
  while (opcao != 4) {
    printf("------------- MENU -------------\n");
    printf(" 1: Inserir na lista de produtos\n");
    printf(" 2: Simular compra on-line\n");
    printf(" 3: Mostrar lista\n");
    printf(" 4: Encerrar o programa\n\n");

    printf("Escolha uma opcao: ");
    scanf("%i", &opcao);
    getchar();
    
    if (opcao == 1) {
      inserirLista(lista, numProduto);
      (*numProduto)++;
    }
    else if (opcao == 2)
      compraSimulator(lista, *numProduto);
    else if (opcao == 3)
      listarProdutos(lista, *numProduto);
    else if (opcao < 1 || opcao > 4)
      printf("Opcao invalida!\n");
  }
  
  printf("\nEncerrando... FIM\n");
}

void compraSimulator(Produto *lista, int tam) {
  Produto carrinho[MAX_LISTA];
  Produto *selecionado;
  char opcao;
  int quantCar = 0;
  
  opcao = ' ';
  
  while (opcao != 'c'){
    printf("\n--------- LOJA VIRTUAL ---------\n");
    printf("[a] Selecao de produto (cod)\n");
    printf("[b] Carrinho (quant. de produtos)\n");
    printf("[c] Finalizar compra\n\n");

    printf("O que deseja fazer? ");
    scanf(" %c", &opcao);
    formatarString(&opcao);
    
    if (opcao == 'a') {
      selecionado = checkProduto(lista, tam);
      compra(selecionado, carrinho, &quantCar);
    }
    else if (opcao == 'b')
      exibirCarrinho(carrinho, quantCar);
    else if (opcao != 'c') 
      printf("Opcao invalida!\n");
  }
  
  printf("\n>> Compra efetuada com sucesso! <<\n\n");
}

void inserirLista(Produto *lista, int *numProduto) {
  float preco = 0;
  int quantEst = 0;
  
  printf("Nome do Produto: ");
  fgets(lista[*numProduto].nome, MAX_NOME, stdin);
  formatarString(lista[*numProduto].nome);
  
  printf("Descricao: ");
  fgets(lista[*numProduto].descricao, MAX_DESC, stdin);
  formatarString(lista[*numProduto].descricao);
  
  while (quantEst <= 0) {
    printf("Quant. Estoque: ");
    scanf("%i", &quantEst);
    
    if (quantEst > 0)
      lista[*numProduto].quant = quantEst;
    else
      printf("Insira uma quantidade acima de 0.\n");
  }
  
  while (preco <= 0) {
    printf("Preco unitario: ");
    scanf("%f", &preco);
    
    if (preco > 0)
      lista[*numProduto].precoUnit = preco;
    else
      printf("Insira um preco acima de 0.\n");
  }
  
  lista[*numProduto].id = *numProduto + 1;
  
  printf("\nProduto adicionado com sucesso.\n\n");
}

void listarProdutos(Produto *lista, int tam) {
  bubbleSort(lista, tam);
  
  printf("\n          Lista de Produtos\n");
  printf("=====================================\n");
  printf(" COD\t  NOME\t    QUANT\t PRECO\n");
  
  for (int i = 0; i < tam; i++) {
    printf(" %i\t  %s\t    %i\t\t %.2f\n", lista[i].id, 
    lista[i].nome, lista[i].quant, lista[i].precoUnit);
  }

  printf("\n");
}

Produto* checkProduto(Produto *lista, int tam) {
  Produto *selecionado = NULL;
  int cod;

  printf("Informe o codigo do produto: ");
  scanf("%i", &cod);

  for (int i = 0; i < tam; i++) {
    if (lista[i].id == cod) 
      selecionado = &lista[i];
  }
  
  return selecionado;
}

void compra(Produto *selecionado, Produto *carrinho, int *quantCar) {
  int quant;
  Produto prodCarrinho;
  
  if (selecionado) {
    printf("Informe a quantidade desejada: ");
    scanf("%i", &quant);
    
    if (quant <= 0) {
      printf("Quantidade invalida, tente novamente.\n");
      return;
    }
    
    if (selecionado->quant >= quant) {
      printf("Produto levado ao carrinho!\n");
      selecionado->quant = selecionado->quant - quant;
      
      prodCarrinho = *selecionado;
      prodCarrinho.quant = quant;
      
      carrinho[*quantCar] = prodCarrinho;
      *quantCar = *quantCar + 1;
      
    } else if (selecionado->quant == 0) {
      printf("O produto esta indisponivel no momento.\n");
      
    } else {
      printf("\nUnidades disponiveis insuficientes,\n");
      printf("Atualmente temos %i unidades.\n", selecionado->quant);
    }
  } else
    printf("Produto inexistente.\n");
}

void exibirCarrinho(Produto *carrinho, int tam) {
  float total = 0;
  
  printf("\n           CARRINHO\n");
  printf("--------------------------------\n");
  printf(" NOME\t    QUANT\t PRECO\n");
  
  for (int i = 0; i < tam; i++) {
    printf(" %s\t    %i\t\t %.2f\n", carrinho[i].nome, 
    carrinho[i].quant, carrinho[i].precoUnit);
    
    total += carrinho[i].quant * carrinho[i].precoUnit;
  }
  
  printf("\n>> Quantidade de produtos: %i\n", tam);
  printf(">> TOTAL A PAGAR: R$%.2f <<\n", total);
}

void bubbleSort(Produto *lista, int tam) {
  int i;
  int j;

  for (i = 0; i < tam; i++) {
    for (j = 0; j < (tam - 1 - i); j++) {
      if (strcmp(lista[j].nome, lista[j+1].nome) > 0) {
        Produto copia = lista[j];
        lista[j] = lista[j + 1];
        lista[j + 1] = copia;
      }
    }
  }
}

void formatarString(char *inputStr) {
  int tamanho; 
  int c;
  
  tamanho = strlen(inputStr);
  
  if (inputStr[tamanho - 1] != '\n')
    while ((c = getchar()) != '\n' && c != EOF); // limpeza buffer
  else
    inputStr[strcspn(inputStr, "\n")] = '\0';

  for (int i = 0; i < tamanho; i++) 
    inputStr[i] = tolower(inputStr[i]); // Para lowerCase
}
