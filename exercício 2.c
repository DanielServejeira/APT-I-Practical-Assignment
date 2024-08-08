/*Faça um programa para ler uma string e exibir a frequência de cada caractere da string. Não é
necessário fazer funções. Exemplo:
Digite uma Palavra: papagaio
p : 2 ocorrencia(s)
a : 3 ocorrencia(s)
g : 1 ocorrencia(s)
i : 1 ocorrencia(s)
o : 1 ocorrencia(s)*/

#include<stdio.h>
#include<string.h>
int main() {
    char palavra[50];
    int repeticoes;
    printf("Insira uma palavra: ");
    gets(palavra);
    for(int i=0;i<strlen(palavra);i++) {
        for(int j=0;j<i;j++) {
            if(palavra[i] == palavra[j]) {
                i++;
            }
        }for(int j=0;j<strlen(palavra);j++) {
            if(palavra[i] == palavra[j]) {
                repeticoes++;
            }
        }
        if(repeticoes == 0) {
            break;
        }
        printf("%c: %d ocorrencia(s)\n",palavra[i],repeticoes);
        repeticoes = 0;
    }
    return 0;
}
