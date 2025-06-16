#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    printf("|----------------------------------------------|\n");
    printf("|__________________MENU________________________|\n");
    printf("| Bem-vindo ao sistema de Cadastro de clientes |\n");
    printf("| seleciona uma op��o:                         |\n");
    printf("| [1] Cadastro de novos clientes               |\n");
    printf("| [2] Listagem de clientes cadastrados         |\n");
    printf("| [3] Busca de cliente por nome ou CPF         |\n");
    printf("| [4] Editar informa��es de um cliente         |\n");
    printf("| [5] Remover um cliente do sistema            |\n");
    printf("| [6] Salvar e carregar dados de um arquivo    |\n");
    printf("|______________________________________________|");
    printf("\nSelecione uma op��o entre 1 a 6: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("op��o 1 selecionada: Cadastro de novos clientes.\n");
        // Aqui voc� pode adicionar a l�gica para cadastrar novos clientes
        break;
    case 2:
        printf("op��o 2 selecionada: Listagem de clientes cadastrados.\n");
        // Aqui voc� pode adicionar a l�gica para listar os clientes cadastrados
        break;
    case 3:
        printf("op��o 3 selecionada: Busca de cliente por nome ou CPF.\n");
        // Aqui voc� pode adicionar a l�gica para buscar um cliente
        break;
    case 4:
        printf("op��o 4 selecionada: Editar informa��es de um cliente.\n");
        // Aqui voc� pode adicionar a l�gica para editar informa��es de um cliente
        break;
    case 5:
        printf("op��o 5 selecionada: Remover um cliente do sistema.\n");
        // Aqui voc� pode adicionar a l�gica para remover um cliente
        break;
    case 6:
        printf("op��o 6 selecionada: Salvar e carregar dados de um arquivo.\n");
        // Aqui voc� pode adicionar a l�gica para salvar e carregar dados
        break;
    default:
        printf("op��o inv�lida. Por favor, selecione uma op��o v�lida.\n");
    }
}