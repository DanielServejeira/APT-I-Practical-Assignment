*/Faça uma função para verificar e retornar se uma string está contida em outra, ou seja, se uma
string é substring de outra. Utilize retorno do valor 0 para falso e valor 1 para verdadeiro. Exemplo:
Digite uma Palavra: abacate
Palavra de Busca: cat
Palavra de Busca esta na String
Digite uma Palavra: papagaio
Palavra de Busca: gio
Palavra de Busca nao esta na String
Digite uma Palavra: papagaio
Palavra de Busca: ioio
Palavra de Busca nao esta na String
Digite uma Palavra: batata
Palavra de Busca: aba
Palavra de Busca nao esta na String*/

#include<stdio.h>
#include<string.h>
int contida(char str[], char substr[]) {
    int valor=0;
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
                    return valor;
                }
            }else{
                break;
            }
        }
    }
    return valor;
}
int main() {
    char word[50], busca[50];
    printf("Insira uma palavra: ");
    gets(word);
    printf("Palavra de busca: ");
    gets(busca);
    if(contida(word,busca)) {
        printf("Palavra de busca esta na string.\n");
    }else{
        printf("Palavra de busca nao esta na string.\n");
    }
    return 0;
}
