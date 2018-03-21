#include"funcoes.h"

int menuInicial(){
    int op;

    linha();
    printf("\t# SISTEMA DE BALANCO PATRIMONIAL");
    linha();
    printf("\n\t (1) Criar DRE");
    printf("\n\t (2) Editar DRE");
    printf("\n\t (3) Deletar DRE");
    printf("\n\t (4) Exibir DRE");
    printf("\n\t (5) Sair\n");
    linha();
    printf("\n -> Escolha uma opcao: ");
    scanf("%d", &op);
    getchar();

    return op;
}

FILE *abrirArquivo(char modo[]){
    FILE *arquivo = fopen("dados.dat", modo);
    return arquivo;
}

void linha(){
    printf("\n +-----------------------------------------------------------------------+\n");
}

void pausar(){
    int aux;
    printf("\n -> Digite [ENTER] para continuar ...\n");
    linha();
    aux = getchar();
}

void limpaTela(){
    system("cls || clear");
}

void criaEspacosPadrao(char *palavraInicial, char *espacos, int tamanhoLinha){
    int tam = tamanhoLinha - strlen(palavraInicial);
    int i;

    for(i=0; i < tam; i++){
        espacos[i] = ' ';
    }

    espacos[tam] = '\0';
}

void stringMaiusculo(char *nome, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        nome[i] = toupper(nome[i]);
    }
}

void stringMinusculo(char *nome, int tamanho){
    nome[0] = toupper(nome[0]);
    int i;
    for(i = 1; i < tamanho; i++){
        nome[i] = tolower(nome[i]);
    }
}


