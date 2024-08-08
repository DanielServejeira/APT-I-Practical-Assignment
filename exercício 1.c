/*Faça um programa para codificar uma frase contida em uma string. Para tanto, o código deve
adicionar um inteiro k ao caractere, isto é, ao código da tabela ASCII do caractere. Esse valor k é
fornecido pelo usuário, podendo assumir valores entre 1 e 10. Faça uma função para codificar, a qual
recebe uma string e o valor k como parâmetros. O programa também deve ter uma função para
decodificar, a qual recebe uma string codificada e o valor k. Exemplo:
Digite uma palavra: abacate
Valor k: 5
Palavra codificada: fgfhfyj
Digite uma palavra codificada: fgfhfyj
Valor k: 5
Palavra decodificada: abacate*/

#include<stdio.h>
#include<string.h>
int codificar(char str[],int k) {
    for(int i=0;i<strlen(str);i++) {
        str[i]+=k;
    }
    return str;
}
int decodificar(char str[],int k) {
    for(int i=0;i<strlen(str);i++) {
        str[i]-=k;
    }
    return str;
}
int main() {
    char palavra[50];
    int k;
    printf("Insira uma palavra: ");
    gets(palavra);
    printf("Insira um valor para k (de 1 a 10): ");
    scanf("%d",&k);
    printf("Palavra codificada: %s\n\n",codificar(palavra,k));
    getchar();
    printf("Insira uma palavra codificada: ");
    gets(palavra);
    printf("Insira um valor para k (de 1 a 10): ");
    scanf("%d",&k);
    printf("Palavra decodificada: %s\n",decodificar(palavra,k));
    return 0;
}
