#include <stdio.h>
#include <string.h>

int main() {
    int A[4][4];
    int B[4][4];
    int result[4][4];
    char operation[10];

    // Ler os valores da matriz A
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Ler os valores da matriz B
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Ler a operação a ser realizada
    scanf("%s", operation);

    // Realizar a operação e calcular a matriz resultante
    if (strcmp(operation, "soma") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                result[i][j] = A[i][j] + B[i][j];
            }
        }
    } else if (strcmp(operation, "sub") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                result[i][j] = A[i][j] - B[i][j];
            }
        }
    } else if (strcmp(operation, "mult") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                result[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    } 

    // Imprimir a matriz resultante formatada
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
