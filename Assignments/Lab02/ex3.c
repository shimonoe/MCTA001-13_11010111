#include <stdlib.h>
#include <stdio.h>

void adiciona_ordenado(double *dest, double *inicial, int n, double novo_num) {
    int insert_index;
    for (int i = 0; i < n; i++) {
        insert_index = i;
        if (novo_num <= inicial[i]) break;
    }

    for (int i = 0; i < insert_index; i++) {
        dest[i] = inicial[i];
    }

    dest[insert_index] = novo_num;

    for (int i = insert_index; i < n; i++) {
        dest[i+1] = inicial[i];
    }
}

void print_vector(double *vec, int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", vec[i]);
    }
    printf("\n");
}

int main() {
    double *vec, *target, new_number;
    int n;
    printf("Digite n: ");
    scanf("%d", &n);

    vec = malloc(sizeof(double)*n);
    target = malloc(sizeof(double)*n+1);

    if (vec == NULL || target == NULL) return 1;

    for (int i = 0; i < n; i++)
        scanf("%lf", &vec[i]);

    printf("Digite o novo numero: ");
    scanf("%lf", &new_number);

    adiciona_ordenado(target, vec, n, new_number);
    print_vector(target, n+1);

    return 0;
}
