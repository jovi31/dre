#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>
#include"criar.c"
#include"editar.c"
#include"remover.c"
#include"exibir.c"
#include"extras.c"

int main(){
    int op;

    setlocale(LC_ALL, "Portuguese");

    do{
        op = menuInicial();
        limpaTela();

        switch(op){
            case 1:
                criarDRE();
            break;

            case 2:
            break;

            case 3:
                deletarArquivo();
            break;

            case 4:
            break;

            case 5:
                linha();
                printf("\n -> Saindo do sistema ...\n");
                linha();
            break;

            default:
                linha();
                printf("\n -> Opção inválida!\n");
                linha();
            break;
        }
        pausar();
        limpaTela();
    }while(op != 5);

    return 0;
}
