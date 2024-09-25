#include <stdio.h>
int main() {
    int numeroProdotti;
    float prezzoUnitario, importoTotale, sconto = 0.0;
    printf("Numero di prodotti: ");
    scanf("%d", &numeroProdotti);
    printf("Prezzo unitario: ");
    scanf("%f", &prezzoUnitario);
    importoTotale = numeroProdotti * prezzoUnitario;
    if (importoTotale > 50) sconto = 0.20;
    else if (importoTotale > 10) sconto = 0.10;
    printf("Importo totale: %.2f€\n", importoTotale);
    printf("Sconto: %.0f\n", sconto * 100);
    printf("Importo scontato: %.2f€\n", importoTotale * (1 - sconto));
    return 0;
}