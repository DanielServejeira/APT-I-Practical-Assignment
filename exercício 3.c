/*Faça uma função para retornar a substring de uma string pelo parâmetro da função (não usar return).
Para tanto, a função deve receber uma string de entrada, uma string de saída, a posição inicial e
posição final de onde serão copiados os caracteres da string de entrada. Exemplo:
Digite uma palavra: paralelepipedo
Digite posicao inicial: 4
Digite posicao final: 9
Substring: lelepi*/

#include<stdio.h>
#include<string.h>
void recortar(char str[],char stringfinal[],int n1,int n2) {
    for(int i=0;i<strlen(str);i++,n1++) {
        if(str[n1] == str[n2]) {
            stringfinal[i] = str[n1];
            break;
        }
        stringfinal[i] = str[n1];
    }
}
int main() {
    char palavra[50], palavrarecortada[50];
    int pos_inicial, pos_final;
    printf("Insira uma palavra: ");
    gets(palavra);
    printf("Insira a posicao inicial: ");
    scanf("%d",&pos_inicial);
    printf("Insira a posicao final: ");
    scanf("%d",&pos_final);
    recortar(palavra,palavrarecortada,pos_inicial,pos_final);
    printf("Substring: %s\n",palavrarecortada);
    return 0;
}
