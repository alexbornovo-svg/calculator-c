#include <stdio.h>

int main() {
    printf("Inserisci numero uno: ");
    int numero_uno;
    scanf("%d", &numero_uno);
    
    printf("Inserisci operatore: ");
    char operatore[2];
    scanf("%1s", operatore);

    printf("Inserisci numero due: ");
    int numero_due;
    scanf("%d", &numero_due);

    if (operatore[0] == '+') {
        int risultato = numero_uno + numero_due;
        printf("Risultato: %d\n", risultato);

    } else if (operatore[0] == '-') {
        int risultato = numero_uno - numero_due;
        printf("Risultato: %d\n", risultato);

    } else if (operatore[0] == '*') {
        int risultato = numero_uno * numero_due;
        printf("Risultato: %d\n", risultato);

    } else if (operatore[0] == '/') {
        int risultato = numero_uno / numero_due;
        printf("Risultato: %d\n", risultato);

    } else {
        printf("Operatore non valido\n");
    }

    return 0;
}