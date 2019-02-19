#include <stdlib.h>
#include <stdio.h>

double encontra_maior(double *v, int n) {
    if (n == 1) return v[0];

    double atual = v[n-1];
    double maior = encontra_maior(v, n-1);

    return (atual > maior ? atual : maior);
}

int main() {
    double *vec;
    int n;
    printf("Digite n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%lf", &vec[i]);

    printf("Maior: %.2lf\n", encontra_maior(vec, n));

    return 0;
}
