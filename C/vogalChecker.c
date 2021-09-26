#include <stdio.h>
int main() {
    char c;
    int vogal_baixa, vogal_maiuscula;
    printf("Introduz uma letra:  ");
    scanf("%c", &c);

    // avalia para 1 se a variável C for uma vogal miníscula
    vogal_baixa = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // avalia para 1 se a variável c for uma vogal maiúscula 
    vogal_maiuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // 1 (true) se C for uma vogal
    if (vogal_baixa || vogal_maiuscula)
        printf("%c é uma vogal.", c);
    else
        printf("%c é uma consoante.", c);
    return 0;
}
