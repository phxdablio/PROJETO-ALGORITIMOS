#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>


/*

Nome: Gabriel Eirado Amaral     Matrícula: UC22200242     Curso: Ciência da Computação

Nome: Thiago Litiery Campelo Moreira     Matrícula: UC22200076     Curso: Ciência da Computação 

Nome: Pedro Henrique Oliveira Marques     Matrícula: UC22103216     Curso: Ciência da Computação 

*/

int main(){
    //PARA A PRIMEIRA SESSAO
    char aux1, pSexo[100]; //Variáveis do tipo char e String
    int i, qPessoas, pIdade[100], aux2 = 1, qMasc = 0, qFemi = 0, aux3 = 0, aux4 = 0; //Variáveis do tipo inteiro
    float dinheiro = 0; //Variável do tipo real 
    
    float coletarPreco(float *d, int *aux3, int *aux4); //Declaração de função real
    int classificacao(int v[], int Q); //Declaração de função inteira
    int maioridade(int v[], char s[], int Q); //Declaração de função inteira

    //PARA SEGUNDA SESSAO
    char pSexo2[100]; //Variável do tipo String
    int  qPessoas2, pIdade2[100], aux22 = 1, qMasc2 = 0, qFemi2 = 0, aux32 = 0, aux42 = 0; //Variáveis do tipo inteiro 
    float dinheiro2 = 0; //Variável do tipo real

    printf("Quantas sessoes serao no dia? "); //Mostra na tela
    scanf("%c", &aux1); //Coleta variável auxiliar para o switch case

    switch (aux1){
        case '1': //Condicional da variável auxiliar == 1
            
            printf("Quantas pessoas vao assistir o filme: "); //Mostra na tela
            scanf("%d", &qPessoas); //Coleta a quantidade de pessoas para o programa
            
            if(qPessoas < 10){  //Não aceita menos de 10 pessoas
                printf("O numero minimo sao 10 pessoas"); //Mostra na tela
                }else{
                    for(i = 0 ; i < qPessoas ; i++){ //Loop para as coletas de informações de todas as  pessoas
                        printf("Qual e o sexo da %d pessoa: o (M -masculino, F - Feminino): ", aux2); //Mostra na tela
                        fflush(stdin); //Limpa a memória evitando problemas no scanf
                        scanf("%c", &pSexo[i]); //Coleta o sexo de cada pessoa
                        pSexo[i] = toupper(pSexo[i]); //Transforma o sexo do usuario toda em maiúsculo evitando erros em condicionais

                        printf("Digite a idade da %d pessoa: ", aux2); //Mostra na tela
                        fflush(stdin); //Limpa a memoria evitando problemas no scanf
                        scanf("%d", &pIdade[i]); //Coleta a idade de cada pessoa 
                        
                        if(pIdade[i] < 3 || pIdade[i] > 100){ //idade não pode se menor que 3 anos e maior que 100 anos
                            printf("\nIdade invalida\n"); //Mostra na tela
                            }else
                                coletarPreco(&dinheiro, &aux3, &aux4); //chamada da função por referência coletando dinheiro e as variáveis auxiliares e exibe a opção de meio ou inteira
                        
                    aux2++; //Variável auxiliar que mostra em qual parte do loop estamos
                    }                  
                    
                    system("cls"); //Limpa tudo escrito até agora
                    printf("\nO filme e Interstellar\n"); //Mostra na tela
                    
                    for(i = 0; i <= qPessoas; i++){ //Loop para a contagem de pessoas de cada sexo
                        if(pSexo[i] == 'M')
                            qMasc++;
                        if(pSexo[i] == 'F')
                            qFemi++;
                        
                    }
                    
                    printf("Sao %d do sexo masculino e %d do sexo feminino que assistiram o filme\n", qMasc, qFemi); //Mostra na tela

                    classificacao(pIdade, qPessoas); //Chamada de função que diz a classificação etária

                    maioridade(pIdade, pSexo, qPessoas); //Chamada de função que conta os maiores de idade

                    printf("\nO valor arrecadado foi %2.f\n", dinheiro); //Mostra na tela
                    
                    if(aux3 == aux4) //Compara a quantidade de meias e inteiras
                        printf("A quantidade de meias e interias foram iguais: %d\n", aux3);
                        else if(aux3 > aux4)
                            printf("A quantidade de meias foi maior, %d meias e %d inteiras", aux3, aux4);
                            else if(aux3 < aux4)
                                printf("A quantidade de inteiras foi maior, %d inteiras e %d meias", aux4, aux3);
                }

            printf("\npressione qualquer tecla para finalizar:  "); //Mostra na tela
            getch(); //Usado para pausar o programa
            break; //Termina o case == 1

        case '2':   // Conndicional da variavel auxiliar == 2

            //Primeira sessão
            printf("Quantas pessoas vao assistir a primeira sessao: "); //Mostra na tela
            scanf("%d", &qPessoas); //Coleta a quantidade de pessoas para o programa
            
            if(qPessoas < 10){ //Não aceita menos de 10 pessoas
                printf("O numero minimo sao 10 pessoas"); //Mostra na tela
                }else{
                    for(i = 0 ; i < qPessoas ; i++){ //Loop para as coletas de informações de todas as  pessoas
                        printf("Qual e o sexo da %d pessoa: o (M -masculino, F - Feminino): ", aux2); //Mostra na tela
                        fflush(stdin); //Limpa a memória evitando problemas no scanf
                        scanf("%c", &pSexo[i]); //Coleta o sexo de cada pessoa
                        pSexo[i] = toupper(pSexo[i]); //Transforma o sexo do usuario toda em maiúsculo evitando erros em condicionais

                        printf("Digite a idade da %d pessoa: ", aux2); //Mostra na tela
                        fflush(stdin);  //Limpa a memoria evitando problemas no scanf
                        scanf("%d", &pIdade[i]); //Coleta a idade de cada pessoa
                        
                        if(pIdade[i] < 3 || pIdade[i] > 100){ //idade não pode se menor que 3 anos e maior que 100 anos
                            printf("\nIdade invalida\n"); //Mostra na tela
                                }else
                                    coletarPreco(&dinheiro, &aux3, &aux4); //chamada da função por referência coletando dinheiro e as variáveis auxiliares e exibe a opção de meio ou inteira
                                
                        aux2++; //Variável auxiliar que mostra em qual parte do loop estamos
                    }               

                }               
            //Segunda sessão
            printf("\nQuantas pessoas vao assistir a segunda sessao: "); //Mostra na tela
            scanf("%d", &qPessoas2); //Coleta a quantidade de pessoas para a segunda sessão
            
            if(qPessoas2 < 10){ //Não aceita menos de 10 pessoas
                printf("O numero minimo sao 10 pessoas"); //Mostra na tela
                }else{
                    for(i = 0 ; i < qPessoas2 ; i++){ //Loop para as coletas de informações de todas as  pessoas
                        printf("Qual e o sexo da %d pessoa: o (M -masculino, F - Feminino): ", aux22); //Mostra na tela
                        fflush(stdin); //Limpa a memória evitando problemas no scanf
                        scanf("%c", &pSexo2[i]); //Coleta o sexo de cada pessoa para a segunda sessão
                        pSexo2[i] = toupper(pSexo2[i]); //Transforma o sexo do usuario toda em maiúsculo evitando erros em condicionais

                        printf("Digite a idade da %d pessoa: ", aux22); //Mostra na tela
                        fflush(stdin); //Limpa a memória evitando problemas no scanf
                        scanf("%d", &pIdade2[i]); //Coleta a idade de cada pessoa da segunda sessão
                        
                        if(pIdade2[i] < 3 || pIdade2[i] > 100){ //idade não pode se menor que 3 anos e maior que 100 anos
                            printf("\nIdade invalida\n"); //Mostra na tela
                                }else
                                    coletarPreco(&dinheiro2, &aux32, &aux42); //chamada da função por referência coletando dinheiro e as variáveis auxiliares e exibe a opção de meio ou inteira para a segunda sessão
                                
                        aux22++; //Contagem da parte do loop para a segunda sessão
                    }               

                }
            
            system("cls"); //Limpa tudo escrito na tela
            //Mostra primeira sessão
            printf("\nO filme e Interstellar\n"); //Loop para a contagem de pessoas de cada sexo
                    
                    for(i = 0; i <= qPessoas; i++){
                        if(pSexo[i] == 'M')
                            qMasc++;
                        if(pSexo[i] == 'F')
                            qFemi++;
                        
                    }
                    
                    printf("Sao %d do sexo masculino e %d do sexo feminino que assistiram o filme\n", qMasc, qFemi); //Mostra na tela

                    classificacao(pIdade, qPessoas); //Chamada de função que diz a classificação etária

                    maioridade(pIdade, pSexo, qPessoas); //Chamada de função que conta os maiores de idade

                    printf("\nO valor arrecadado foi %2.f\n", dinheiro); //Mostra na tela
                    
                    if(aux3 == aux4) //Compara a quantidade de meias e inteiras
                        printf("A quantidade de meias e interias foram iguais: %d\n", aux3);
                        else if(aux3 > aux4)
                            printf("A quantidade de meias foi maior, %d meias e %d inteiras", aux3, aux4);
                            else if(aux3 < aux4)
                                printf("A quantidade de inteiras foi maior, %d inteiras e %d meias", aux4, aux3);
            
            //Mostra segunda sessão
            printf("\n\n\n\n\nO filme e The Imitation Game\n"); //Mostra na tela
                    
                    for(i = 0; i <= qPessoas2; i++){ //Loop para a contagem de pessoas de cada sexo
                        if(pSexo2[i] == 'M')
                            qMasc2++;
                        if(pSexo2[i] == 'F')
                            qFemi2++;
                        
                    }
                    
                    printf("Sao %d do sexo masculino e %d do sexo feminino que assistiram o filme\n", qMasc2, qFemi2); //Mostra na tela

                    classificacao(pIdade2, qPessoas2); //Chamada de função que diz a classificação etária

                    maioridade(pIdade2, pSexo2, qPessoas2); //Chamada de função que conta os maiores de idade

                    printf("\nO valor arrecadado foi %1.f\n", dinheiro2); //Mostra na tela
                    
                    if(aux32 == aux42) //Compara a quantidade de meias e inteiras
                        printf("A quantidade de meias e interias foram iguais: %d\n", aux32);
                        else if(aux32 > aux42)
                            printf("A quantidade de meias foi maior, %d meias e %d inteiras", aux32, aux42);
                            else if(aux32 < aux42)
                                printf("A quantidade de inteiras foi maior, %d inteiras e %d meias", aux42, aux32);

            printf("\n\nO valor total arrecadado foi: %2.f", dinheiro + dinheiro2); //Mostra na tela


            printf("\npressione qualquer tecla para finalizar:  "); //Mostra na tela
            getch(); //Usado para pausar o programa
            break; //Termina o case 2


    default: //Nenhuma condição atingida 
            printf("\nSao no maximo 2 sessoes por dia"); //Mostra na tela
            break; //Termina o default
    }
}


float coletarPreco(float *d, int *aux3, int *aux4){ //Função coleta informações de pagamento
    
    char resposta[10]; //Variável string
    int i; //Variável inteira
    
    printf("Meia ou inteira? \n"); //Mostra na tela
    fflush(stdin); //Limpa a memória para evitar erros no fgets
    fgets(resposta, 10, stdin); //colata a resposta do usuario e coloca na variavel resposta
    
    for(i = 0; i < strlen(resposta) ; i++) //Transforma toda a string em maiúsculo para evitar erros na condicional
        resposta[i] = toupper(resposta[i]);

    if(strcmp(resposta,"MEIA") == 1){ //Compara igualdade
        *d += 25.00; //Soma e coleta o dinheiro
        *aux3 += 1; //Conta a quantidade de meia
        }else if(strcmp(resposta,"INTEIRA") == 1){ //Compara igualdade
            *d += 50.00; //Soma e coleta o dinheiro
            *aux4 += 1; //Conta a quantidade de inteiras
            }else
                printf("\nResposta invalida\n"); //Se nenhuma condição foi atingida

}


int classificacao(int v[], int Q){ //Coloca cada pessoa na sua faixa etária
    
    int i, crianca = 0, teen= 0, adulto = 0, idosos = 0; //Variáveis inteiras
    
    for(i = 0; i < Q ; i++){ //loop para identificar cada pessoa
        if(v[i] >= 3 && v[i] <= 13)
            crianca++;
            else if(v[i] >= 14 && v[i] <= 17)
                teen++;
                else if(v[i] >= 18 && v[i] <= 64)
                    adulto++;
                    else if(v[i] >= 65 && v[i] <= 100)
                        idosos++;
    }

    printf("\nSao:\n%d criancas\n%d adolescentes\n%d adultos\n%d idosos\n", crianca, teen, adulto, idosos); //Mostra na tela
}

int maioridade(int v[], char s[], int Q){ //Conta quantas pessoas de cada sexo são maiores de idade

    int i, maiorM, maiorF;
    
    for(i = 0; i < Q ; i++){ //Loop para identificar cada pessoa
        if(v[i] >= 18 && s[i] == 'M')
            maiorM++;
            else if(v[i] >= 18 && s[i] == 'F')
                maiorF++;
    }
    
    printf("\n%d mulheres maiores de idade\n%d homens maiores de idade", maiorF, maiorM); //Mostra na tela
}
