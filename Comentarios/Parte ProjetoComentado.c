#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>




int main(){
    //PARA A PRIMEIRA SESSAO
    char aux1, pSexo[100]; //Variáveis do tipo char e String
    int i, qPessoas, pIdade[100], aux2 = 1, qMasc = 0, qFemi = 0, aux3 = 0, aux4 = 0; //Váriaveis do tipo inteiro 
    float dinheiro = 0;//Variavel do tipo real 
    
    float coletarPreco(float *d, int *aux3, int *aux4); //Váriaveis do tipo inteiro
    int classificacao(int v[], int Q); //Váriaveis do tipo inteiro
    int maioridade(int v[], char s[], int Q); //Váriaveis do tipo inteiro


    //PARA SEGUNDA SESSAO
    char pSexo2[100]; //Variável do tipo String
    int  qPessoas2, pIdade2[100], aux22 = 1, qMasc2 = 0, qFemi2 = 0, aux32 = 0, aux42 = 0;//Váriaveis do tipo inteiro 
    float dinheiro2 = 0; // Variavel do tipo real 
    
    float coletarPreco2(float *d2, int *aux32, int *aux42); //Váriaveis do tipo inteiro
    int classificacao2(int v2[], int Q2);
    int maioridade2(int v2[], char s2[], int Q2);

    printf("Quantas sessoes serao no dia? "); // Pergunta que aparecerar para o usuário
    scanf("%c", &aux1); //Atribui uma char a váriavel de (quantas sessões vão ser assistidas no dia) que será digitado pelo usuário

    switch (aux1){ //Condicional, valor será atribido pelo usuário
        case '1': //Caso o número digitado for 1 (usuário será direcionado a nova parte)
            
            printf("Quantas pessoas vao assistir o filme: "); //Mensagem que aparecerar ao usuário direcionando para digitar um valor
            scanf("%d", &qPessoas); //Atribui um valor inteiro a váriavel (de quanta pessoas vão as sessões) que será digitado pelo usuário
            
            if(qPessoas < 10){ //O valor digitado pelo usúario tem que ser maior que 10
                printf("O numero minimo sao 10 pessoas"); //Mensagem que aparecerar ao usuário caso o número de pessoas seja inferior a 10
                }else{ //Caso o número seja igual ou superiro a 10 
                    for(i = 0 ; i < qPessoas ; i++){ //Comando de repetção que sera executado de acordo com número digitado pelo usuário (quantas pessoas vão comparecer)
                        printf("Qual e o sexo da %d pessoa: o (M -masculino, F - Feminino): ", aux2); //Mensagem que aparecerar ao usuário (perguntado o genero das pessoas que vão as sessões)
                        fflush(stdin);
                        scanf("%c", &pSexo[i]);//Atribui resposta a variável (pSexo)
                        pSexo[i] = toupper(pSexo[i]); //Converte a char da variável em letras maiúsculas
                

                        printf("Digite a idade da %d pessoa: ", aux2); //Mensagem que aparecerar ao usuário (para digitar a idade de cada pessoa)
                        fflush(stdin);
                        scanf("%d", &pIdade[i]); //Atribui valor inteiro a váriavel 
                        
                        if(pIdade[i] < 3 || pIdade[i] > 100){ //Condicional, menor que 3 e maior que 100
                            printf("\nIdade invalida\n"); //Caso a condição seja verdadeira aparecera essa mensagem ao úsuario 
                            }else //Caso o contrario 
                                coletarPreco(&dinheiro, &aux3, &aux4); //Atribui Valor as váriaveis
                        
                    aux2++; 
}                  
                