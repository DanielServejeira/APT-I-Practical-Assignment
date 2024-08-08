/*Faça uma função para retornar a quantidade de vezes que uma string está contida em outra, ou seja,
quantas vezes a substring aparece em uma string. Exemplo:
Digite uma Palavra: 242544264542634524253454234
Palavra de Busca: 42
A Palavra de Busca ocorre 5 vez(es)
Digite uma Palavra: papagaio
Palavra de Busca: pa
A Palavra de Busca ocorre 2 vez(es)
Digite uma Palavra: abacate
Palavra de Busca: pa
A Palavra de Busca ocorre 0 vez(es)
Digite uma Palavra: hoje vou programar muito
Palavra de Busca: programa
A Palavra de Busca ocorre 1 vez(es)*/

#include<stdio.h>
#include<string.h>
int repet_substring(char str[], char substr[]) {
    int valor=0, qtd=0;
    for(int i=0;i<strlen(str);i++) {
        for(int j=0;j<strlen(substr);j++) {
            if(substr[j] == str[i]) {
                for(int k=j, l=i; k<strlen(substr); k++, l++) {
                    if(substr[k] == str[l]) {
                        valor = 1;
                    }else{
                        valor = 0;
                        break;
                    }
                }
                if(valor == 1) {
                    qtd++;
                }
            }else{
                break;
            }
        }
    }
    return qtd;
}
int main() {
    char palavra[50],busca[50];
    int quant;
    printf("Insira uma palavra: ");
    gets(palavra);
    printf("Palavra de busca: ");
    gets(busca);
    printf("A palavra de busca ocorre %d vez(es)\n",repet_substring(palavra,busca));
    return 0;
}
