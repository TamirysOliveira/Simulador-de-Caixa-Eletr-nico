#include <stdio.h>
#include <locale.h>

int main (void){
    char nomeCliente [30];
    float saldo, deposito, saque;
    int resp;
    
    setlocale (LC_ALL, "Portuguese");
    printf ("Por favor, digite seu primeiro nome: ");
    scanf ("%s", &nomeCliente);
    printf ("Digite agora o saldo da sua conta: R$ ");
    scanf ("%f", &saldo );
    
    printf ("\n\n����������  BANCO PAPATUDO  ����������\n\n");
    printf ("Ola, %s!\n\n", nomeCliente);
    printf ("Digite a op��o da opera��o que deseja fazer:\n\n1 Para ver o saldo atual da conta\n"
                "2 Para fazer um dep�sito\n3 Para fazer um saque\n4 Para finalizar\n");
    scanf ("%d", &resp);
    
    while (resp != 4){
         if (resp == 1){
             printf ("\n Saldo: R$ %.2f\n", saldo);
             printf ("�--============--�");
             printf ("\n\nDigite a op��o da opera��o que deseja fazer:\n\n1 Para ver o saldo atual da conta\n"
                        "2 Para fazer um dep�sito\n3 Para fazer um saque\n4 Para finalizar\n");
            scanf ("%d", &resp);
            
         } else if (resp == 2){
             printf ("\nDigite o valor do deposito a ser feito: R$ ");
             scanf ("%f", &deposito);
             saldo = saldo + deposito;
             printf ("\n Saldo: R$ %.2f\n", saldo);
             printf ("�--============--�");
            printf ("\n\nDigite a op��o da opera��o que deseja fazer:\n\n1 Para ver o saldo atual da conta\n"
                        "2 Para fazer um dep�sito\n3 Para fazer um saque\n4 Para finalizar\n");
                scanf ("%d", &resp);
                
         } else if (resp == 3){
             printf ("\nDigite o valor que deseja sacar: R$ ");
             scanf ("%f", &saque);
             saldo = saldo - saque;
             printf ("\n Saldo: R$ %.2f\n", saldo);
             printf ("�--============--�");
             printf ("\n\nDigite a op��o da opera��o que deseja fazer:\n\n1 Para ver o saldo atual da conta\n"
                        "2 Para fazer um dep�sito\n3 Para fazer um saque\n4 Para finalizar\n");
                scanf ("%d", &resp);
         }
    }                           
    printf ("\nSess�o encerrada.\nObrigado por usar o Banco Papatudo\n");
    return 0;
}

