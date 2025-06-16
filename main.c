#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    printf("|----------------------------------------------|\n");
    printf("|__________________MENU________________________|\n");
    printf("| Bem-vindo ao sistema de Cadastro de clientes |\n");
    printf("| seleciona uma opção:                         |\n");
    printf("| [1] Cadastro de novos clientes               |\n");
    printf("| [2] Listagem de clientes cadastrados         |\n");
    printf("| [3] Busca de cliente por nome ou CPF         |\n");
    printf("| [4] Editar informações de um cliente         |\n");
    printf("| [5] Remover um cliente do sistema            |\n");
    printf("| [6] Salvar e carregar dados de um arquivo    |\n");
    printf("|______________________________________________|");
    printf("\nSelecione uma opção entre 1 a 6: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("opção 1 selecionada: Cadastro de novos clientes.\n");
        // Aqui você pode adicionar a lógica para cadastrar novos clientes
        break;
    case 2:
        printf("opção 2 selecionada: Listagem de clientes cadastrados.\n");
        // Aqui você pode adicionar a lógica para listar os clientes cadastrados
        break;
    case 3:
        printf("opção 3 selecionada: Busca de cliente por nome ou CPF.\n");
        // Aqui você pode adicionar a lógica para buscar um cliente
        break;
    case 4:
        printf("opção 4 selecionada: Editar informações de um cliente.\n");
        // Aqui você pode adicionar a lógica para editar informações de um cliente
        break;
    case 5:
        printf("opção 5 selecionada: Remover um cliente do sistema.\n");
        // Aqui você pode adicionar a lógica para remover um cliente
        break;
    case 6:
        printf("opção 6 selecionada: Salvar e carregar dados de um arquivo.\n");
        // Aqui você pode adicionar a lógica para salvar e carregar dados
        break;
    default:
        printf("opção inválida. Por favor, selecione uma opção válida.\n");
    }
}