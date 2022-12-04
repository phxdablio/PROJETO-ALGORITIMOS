#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>




int main(){
    //PARA A PRIMEIRA SESSAO
    char aux1, pSexo[100];
    int i, qPessoas, pIdade[100], aux2 = 1, qMasc = 0, qFemi = 0, aux3 = 0, aux4 = 0;
    float dinheiro = 0;
    
    float coletarPreco(float *d, int *aux3, int *aux4);
    int classificacao(int v[], int Q);
    int maioridade(int v[], char s[], int Q);


    //PARA SEGUNDA SESSAO
    char pSexo2[100];
    int  qPessoas2, pIdade2[100], aux22 = 1, qMasc2 = 0, qFemi2 = 0, aux32 = 0, aux42 = 0;
    float dinheiro2 = 0;
    
    float coletarPreco2(float *d2, int *aux32, int *aux42);
    int classificacao2(int v2[], int Q2);
    int maioridade2(int v2[], char s2[], int Q2);

    printf("Quantas sessoes serao no dia? ");
    scanf("%c", &aux1);

    switch (aux1){
        case '1':
            
            printf("Quantas pessoas vao assistir o filme: ");
            scanf("%d", &qPessoas);
            
            if(qPessoas < 10){
                printf("O numero minimo sao 10 pessoas");
                }else{
                    for(i = 0 ; i < qPessoas ; i++){
                        printf("Qual e o sexo da %d pessoa: o (M -masculino, F - Feminino): ", aux2);
                        fflush(stdin);
                        scanf("%c", &pSexo[i]);
                        pSexo[i] = toupper(pSexo[i]);

                        printf("Digite a idade da %d pessoa: ", aux2);
                        fflush(stdin);
                        scanf("%d", &pIdade[i]);
                        
                        if(pIdade[i] < 3 || pIdade[i] > 100){
                            printf("\nIdade invalida\n");
                            }else
                                coletarPreco(&dinheiro, &aux3, &aux4);
                        
                    aux2++; 
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
}
    
            printf("\npressione qualquer tecla para finalizar:  ");
            getch();
            break;

        case '2':

            
            printf("Quantas pessoas vao assistir a primeira sessao: ");
            scanf("%d", &qPessoas);
            
            if(qPessoas < 10){
                printf("O numero minimo sao 10 pessoas");
                }else{
                    for(i = 0 ; i < qPessoas ; i++){
                        printf("Qual e o sexo da %d pessoa: o (M -masculino, F - Feminino): ", aux2);
                        fflush(stdin);
                        scanf("%c", &pSexo[i]);
                        pSexo[i] = toupper(pSexo[i]);

                        printf("Digite a idade da %d pessoa: ", aux2);
                        fflush(stdin);
                        scanf("%d", &pIdade[i]);
                        
                        if(pIdade[i] < 3 || pIdade[i] > 100){
                            printf("\nIdade invalida\n");
                                }else
                                    coletarPreco(&dinheiro, &aux3, &aux4);
                                
                        aux2++; 
                    }               

}               
            printf("\nQuantas pessoas vao assistir a segunda sessao: ");
            scanf("%d", &qPessoas2);
            
            if(qPessoas2 < 10){
                printf("O numero minimo sao 10 pessoas");
                }else{
                    for(i = 0 ; i < qPessoas2 ; i++){
                        printf("Qual e o sexo da %d pessoa: o (M -masculino, F - Feminino): ", aux22);
                        fflush(stdin);
                        scanf("%c", &pSexo2[i]);
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