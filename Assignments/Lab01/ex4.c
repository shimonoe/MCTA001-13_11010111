#include <stdio.h>
#include <stdlib.h>

void RemoveFirst(int *v, int size) {
    for (int i = 1; i < size; i++)
        v[i-1] = v[i];
    v[size-1] = 0;
}

void PrintVector(int *v, int size) {
    printf("Vetor: ");
    for (int i = 0; i < size; i++) {
        printf("%d", v[i]);
        if (i+1 != size) printf(", ");
    }
    printf("\n");
}

int main() {
    int n;
    int *vec;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    vec = malloc(sizeof(int)*n);
    if (vec == NULL) return 1;

    for (int i = 0; i < n; i++) {
        int element = 0;
        scanf("%d", &element);
        vec[i] = element;
    }

    PrintVector(vec, n);

    int new_element;
    RemoveFirst(vec, n);
    PrintVector(vec, n);

    return 0;
}
