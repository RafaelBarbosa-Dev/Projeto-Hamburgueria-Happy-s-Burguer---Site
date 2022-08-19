int main() {
    
    char nome[30];
    char endereco[30];
    int idade;
    
    printf("digite seu nome: \n");
    scanf("%s", &nome);
    
    printf("digite seu endereco\n");
    scanf("%s", &endereco);
    
    printf("digite sua idade \n");
    scanf("%d", &idade);
    
    printf("\n Nome: %s",nome );
    
    printf("\n Endereco: %s", endereco);
    
    printf("\n idade: %d", idade);

    return (EXIT_SUCCESS);
}
