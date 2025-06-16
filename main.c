#ifndef CLIENTE_H
#define CLIENTE_H

#define MAX_CLIENTES 1000

typedef struct {
    char nome[100];
    char cpf[15];
    char email[100];
    char telefone[20];
} Cliente;

void carregarClientes(Cliente clientes[], int *total);
void salvarClientes(Cliente clientes[], int total);
void cadastrarCliente(Cliente clientes[], int *total);
void listarClientes(Cliente clientes[], int total);
void buscarCliente(Cliente clientes[], int total);
void editarCliente(Cliente clientes[], int total);
void removerCliente(Cliente clientes[], int *total);

#endifm
