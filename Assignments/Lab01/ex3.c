#include <stdio.h>
#include <stdlib.h>

void InsertFirst(int *v, int size, int new) {
    int tmp = v[0];
    v[0] = new;
    for (int i = 1; i < size; i++) {
        int current = v[i];
        v[i] = tmp;
        tmp = current;
    }
}

void PrintVector(int *v, int size) {
    for (int i = 0; i < size; i++)
        printf("%d", v[i]);
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
    printf("Informe o novo valor a ser inserido no começo do vetor: ");
    scanf("%d", &new_element);

    InsertFirst(vec, n, new_element);
    PrintVector(vec, n);

    return 0;
}
