# 📋 Sistema de Cadastro de Clientes de uma Empresa

Projeto colaborativo desenvolvido com alunos com o objetivo de criar um sistema em 
linguagem C que permite cadastrar, listar, buscar, editar e remover clientes de uma empresa.

## 🛠 Linguagem utilizada

- Linguagem C (Linguagem de programação estruturada)

## 🎯 Funcionalidades

- Cadastro de novos clientes
- Listagem de clientes cadastrados
- Busca de cliente por nome ou CPF
- Edição de dados do cliente
- Remoção de clientes do sistema
- Armazenamento em arquivo `.txt` (persistência dos dados)

## 🗂 Estrutura do projeto

sistema_cadastro_clientes/
├── src/
│ ├── main.c
│ ├── cliente.c
│ └── cliente.h
├── data/
│ └── clientes.txt
├── README.md
└── Makefile

## 🧱 Estrutura de dados

Utilizaremos `struct` para representar os dados dos clientes:

```c
typedef struct {
    char nome[100];
    char cpf[15];
    char email[100];
    char telefone[20];
} Cliente;
💾 Armazenamento de dados

Os dados serão salvos em um arquivo clientes.txt, com leitura 
e escrita feitas por meio de funções da biblioteca <stdio.h>.

👨‍👩‍👧‍👦 Equipe
Nome do Júlia Argueles

Nome do Lorena

Nome do Maria F.

Nome do Heitor

Nome do Julia Alves

Nome do Professor colaborador Ivan

📌 Observações
O sistema será expandido conforme o andamento do trabalho;

Versões futuras poderão incluir ordenação, playlists e exportação de dados.
