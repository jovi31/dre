#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"criar.c"
#include"editar.c"
#include"remover.c"
#include"exibir.c"
#include"extras.c"

int main(){
    int op;

    do{
        op = menuInicial();
        limpaTela();

        switch(op){
            case 1:
            break;

            case 2:
            break;

            case 3:
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
                printf("\n -> Opcao invalida!\n");
                linha();
            break;
        }
        pausar();
        limpaTela();
    }while(op != 5);

    return 0;
}
