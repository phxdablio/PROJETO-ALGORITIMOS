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
                                coletarPreco(&dinheiro, &aux3, &aux4); //Variavel que pega o valor, total, inteira e das meia
                        
                    aux2++; 
}                  
           system("cls");
                    printf("\nO filme e Interstellar\n");//Mensagem que aparecerar ao usuário
                    
                    for(i = 0; i <= qPessoas; i++){ //Comando de repetição
                        if(pSexo[i] == 'M') //Comando Condicional caso a char digitada seja M (masculino)
                            qMasc++;
                        if(pSexo[i] == 'F')//Comando Condicional caso a char digitada seja F (feminino)
                            qFemi++;
                        
                    }
                    
                    printf("Sao %d do sexo masculino e %d do sexo feminino que assistiram o filme\n", qMasc, qFemi); //Mensagem que aparecerar ao usuário mostrando o número de pessoas do sexo feminino e mascuulino

                    classificacao(pIdade, qPessoas); //Atribui Valor a Classificação

                    maioridade(pIdade, pSexo, qPessoas);

                    printf("\nO valor arrecadado foi %2.f\n", dinheiro); //Mensagem para usuário informando o valor 
                    if(aux3 == aux4) // Condicional numero de inteiras igual numero de meias 
                        printf("A quantidade de meias e interias foram iguais: %d\n", aux3); //Caso a condição for verdadeira aparecerar essa mensagem ao usuário
                        else if(aux3 > aux4) //Condicional caso numero de meias for maior que numero de inteiras 
                            printf("A quantidade de meias foi maior, %d meias e %d inteiras", aux3, aux4); //Caso a condição for verdadeira aparecerar essa mensagem ao usuário
                            else if(aux3 < aux4) //Condicional caso numero de ineteira for maior que numero de meias
                                printf("A quantidade de inteiras foi maior, %d inteiras e %d meias", aux4, aux3);//Caso a condição for verdadeira aparecerar essa mensagem ao usuário
}
    
            printf("\npressione qualquer tecla para finalizar:  "); //mensagem que aparecerar para usuário 
            getch();
            break; //Qubra de execução do switch (da escolha do numero de sessoes que foi 1)

        case '2': //Caso o numero de ssesoes seja duas

            
            printf("Quantas pessoas vao assistir a primeira sessao: "); //Pergunta que aparecerar para o usuário escolher quantas pessoas vão comparecer nas duas sessões
            scanf("%d", &qPessoas); //Atribui valor a variável 
            
            if(qPessoas < 10){ //Condicional onde o número de pessoas deve ser menor a 10
                printf("O numero minimo sao 10 pessoas"); //Caso a condição for valida aparecerar essa mensagem ao usuário
                }else{ // Caso contrario 
                    for(i = 0 ; i < qPessoas ; i++){ //Comando de repetição
                        printf("Qual e o sexo da %d pessoa: o (M -masculino, F - Feminino): ", aux2); //Mensagem que aparecerar ao usuário para definir o genero das pesoas que comparecerão as sessões
                        fflush(stdin);
                        scanf("%c", &pSexo[i]); //Atribui um valor de char a variável 
                        pSexo[i] = toupper(pSexo[i]); //Tranforma o valor atribuuido a variável em maiúsculo 

                        printf("Digite a idade da %d pessoa: ", aux2); // Mensagem para usuário para saber idade dos usuários
                        fflush(stdin);
                        scanf("%d", &pIdade[i]); //Atribui um valor inteiro a variável
                        
                        if(pIdade[i] < 3 || pIdade[i] > 100){ //Condicional onde o valor deve ser menor que 3 ou maior que 100
                            printf("\nIdade invalida\n"); //Mensagem caso uma das condições seja verdadeira
                                }else //Caso contrário 
                                    coletarPreco(&dinheiro, &aux3, &aux4); //Variavel que pega o valor, total, inteira e das meia
                                
                        aux2++; 
                    }               

}               
            printf("\nQuantas pessoas vao assistir a segunda sessao: "); //Mensagem que aparecerar ao usuário referente a numero de pessoas que vão comparecer na segunda sessão
            scanf("%d", &qPessoas2); //Atribui um valor inteiro a variável
            
            if(qPessoas2 < 10){ //Condicional caso o núumero de pessoas seja menor que 10
                printf("O numero minimo sao 10 pessoas"); //Mensagem caso a condição for verdadeira
                }else{ //Caso contrario
                    for(i = 0 ; i < qPessoas2 ; i++){ // Comando de repetição (usado para pegar informaçoes repetidas)
                        printf("Qual e o sexo da %d pessoa: o (M -masculino, F - Feminino): ", aux22); //Mensagem que aparecera ao usuário para saber o genero das pessoas que comparecerão 
                        fflush(stdin);
                        scanf("%c", &pSexo2[i]); //Atriui valor (char) a variável
                        pSexo2[i] = toupper(pSexo2[i]);

                        printf("Digite a idade da %d pessoa: ", aux22);
                        fflush(stdin);
                        scanf("%d", &pIdade2[i]);
                        
                        if(pIdade2[i] < 3 || pIdade2[i] > 100){
                            printf("\nIdade invalida\n");
                                }else
                                    coletarPreco2(&dinheiro2, &aux32, &aux42);
                                
                        aux22++; 
                    }               

                    }
            
            system("cls");
            printf("\nO filme e Interstellar\n");
                    
                    for(i = 0; i <= qPessoas; i++){
                        if(pSexo[i] == 'M')
                            qMasc++;
                        if(pSexo[i] == 'F')
                            qFemi++;
                        
                    }
                    
                    printf("Sao %d do sexo masculino e %d do sexo feminino que assistiram o filme\n", qMasc, qFemi);

                    classificacao(pIdade, qPessoas);

                    maioridade(pIdade, pSexo, qPessoas);

                    printf("\nO valor arrecadado foi %2.f\n", dinheiro);
                    if(aux3 == aux4)
                        printf("A quantidade de meias e interias foram iguais: %d\n", aux3);
                        else if(aux3 > aux4)
                            printf("A quantidade de meias foi maior, %d meias e %d inteiras", aux3, aux4);
                            else if(aux3 < aux4)
                                printf("A quantidade de inteiras foi maior, %d inteiras e %d meias", aux4, aux3);
            
            //SEGUNDA SESSAO
            printf("\n\n\n\n\nO filme e The Imitation Game\n");
                    
                    for(i = 0; i <= qPessoas2; i++){
                        if(pSexo2[i] == 'M')
                            qMasc2++;
                        if(pSexo2[i] == 'F')
                            qFemi2++;
                        
                    }
                    
                    printf("Sao %d do sexo masculino e %d do sexo feminino que assistiram o filme\n", qMasc2, qFemi2);

                    classificacao2(pIdade2, qPessoas2);

                    maioridade2(pIdade2, pSexo2, qPessoas2);

                    printf("\nO valor arrecadado foi %1.f\n", dinheiro2);
                    if(aux32 == aux42)
                        printf("A quantidade de meias e interias foram iguais: %d\n", aux32);
                        else if(aux32 > aux42)
                            printf("A quantidade de meias foi maior, %d meias e %d inteiras", aux32, aux42);
                            else if(aux32 < aux42)
                                printf("A quantidade de inteiras foi maior, %d inteiras e %d meias", aux42, aux32);

            printf("\n\nO valor total arrecadado foi: %f", dinheiro + dinheiro2);





            printf("\npressione qualquer tecla para finalizar:  ");
            getch();
            break;


        default:
            printf("\nSao no maximo 2 sessoes por dia");
            break;
}

}


float coletarPreco(float *d, int *aux3, int *aux4){
    
    char resposta[10];
    int i;
    printf("Meia ou inteira? \n");
    fflush(stdin);
    fgets(resposta, 10, stdin);
    
    for(i = 0; i < strlen(resposta) ; i++)
        resposta[i] = toupper(resposta[i]);

    if(strcmp(resposta,"MEIA") == 1){
        *d += 25.00;
        *aux3 += 1;
        }else if(strcmp(resposta,"INTEIRA") == 1){
            *d += 50.00;
            *aux4 += 1;
            }else
                printf("\nResposta invalida\n");

}


int classificacao(int v[], int Q){
    
    int i, crianca = 0, teen= 0, adulto = 0, idosos = 0;
    for(i = 0; i < Q ; i++){
        if(v[i] >= 3 && v[i] <= 13)
            crianca++;
            else if(v[i] >= 14 && v[i] <= 17)
                teen++;
                else if(v[i] >= 18 && v[i] <= 64)
                    adulto++;
                    else if(v[i] >= 65 && v[i] <= 100)
                        idosos++;
        }

    printf("\nSao:\n%d criancas\n%d adolescentes\n%d adultos\n%d idosos\n", crianca, teen, adulto, idosos); 
}

int maioridade(int v[], char s[], int Q){

    int i, maiorM, maiorF;
    for(i = 0; i < Q ; i++){
        if(v[i] >= 18 && s[i] == 'M')
            maiorM++;
            else if(v[i] >= 18 && s[i] == 'F')
                maiorF++;
    }
    printf("\n%d mulheres maiores de idade\n%d homens maiores de idade", maiorF, maiorM);
}



int classificacao2(int v2[], int Q2){
    
    int i, crianca2 = 0, teen2= 0, adulto2 = 0, idosos2 = 0;
    for(i = 0; i < Q2 ; i++){
        if(v2[i] >= 3 && v2[i] <= 13)
            crianca2++;
            else if(v2[i] >= 14 && v2[i] <= 17)
                teen2++;
                else if(v2[i] >= 18 && v2[i] <= 64)
                    adulto2++;
                    else if(v2[i] >= 65 && v2[i] <= 100)
                        idosos2++;
        }

    printf("\nSao:\n%d criancas\n%d adolescentes\n%d adultos\n%d idosos\n", crianca2, teen2, adulto2, idosos2); 
}

int maioridade2(int v2[], char s2[], int Q2){

    int i, maiorM2, maiorF2;
    for(i = 0; i < Q2 ; i++){
        if(v2[i] >= 18 && s2[i] == 'M')
            maiorM2++;
            else if(v2[i] >= 18 && s2[i] == 'F')
                maiorF2++;
    }
    printf("\n%d mulheres maiores de idade\n%d homens maiores de idade", maiorF2, maiorM2);
}

float coletarPreco2(float *d2, int *aux32, int *aux42){
    
    char resposta2[10];
    int i;
    
    printf("Meia ou inteira? \n");
    fflush(stdin);
    fgets(resposta2, 10, stdin);
    
    for(i = 0; i < strlen(resposta2) ; i++)
        resposta2[i] = toupper(resposta2[i]);

    if(strcmp(resposta2,"MEIA") == 1){
        *d2 += 25.00;
        *aux32 += 1;
        }else if(strcmp(resposta2,"INTEIRA") == 1){
            *d2 += 50.00;
            *aux42 += 1;
            }else
                printf("\nResposta invalida\n");

}     