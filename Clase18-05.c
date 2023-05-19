#include <stdio.h>

#define DIMENSION 50

int main() {
    int matriz[DIMENSION][DIMENSION];
    int dimension;
    int i, j;
    printf("Ingrese la dimension de la matriz: ");
    scanf("%d", &dimension);
    // Inicializar matriz con ceros y diagonal principal a unos
    for (i = 0; i < dimension; i++) {
        for (j = 0; j < dimension; j++) {
            if (i == j) {
                matriz[i][j] = 1;  // Diagonal principal
            } else {
                matriz[i][j] = 0;  // Resto de elementos
            }
        }
    }
    // Imprimir la matriz
    printf("Matriz resultante:\n");
    for (i = 0; i < dimension; i++) {
        for (j = 0; j < dimension; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    