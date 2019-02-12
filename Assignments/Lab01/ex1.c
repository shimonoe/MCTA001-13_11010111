#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(int number) {
    if (number == 0) return 0;

    while (number != 1) {
        if (number % 2 != 0) return 0;
        number /= 2;
    }
    return 1;
}

int main() {

    int n;
    int *vec;

    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    vec = malloc(sizeof(int)*n);
    if (vec == NULL) return 1;

    for (int i = 0; i < n; i++) {
        int element = 0;
        scanf("%d", &element);
        vec[i] = element;
    }

    int power_of_two = 0;
    for (int i = 0; i < n; i++) {
        if (IsPowerOfTwo(vec[i])) power_of_two++;
    }

    printf("Ha %d potencias de 2.\n", power_of_two);

    return 0;
}
