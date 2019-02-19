#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float average(float *v, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += v[i];

    return sum/n;
}

float std_deviation(float *v, int n) {
    float avg = average(v, n);
    float diff_sqrt_sum = 0;

    for (int i = 0; i < n; i++) {
        diff_sqrt_sum += pow((v[i]-avg), 2);
    }

    return diff_sqrt_sum/n;
}

float max(float *v, int n) {
    float max = -9999999;
    for (int i = 0; i < n; i++)
        if (v[i] > max) max = v[i];
    return max;
}

float min(float *v, int n) {
    float min = 99999999;
    for (int i = 0; i < n; i++)
        if (v[i] < min) min = v[i];
    return min;
}

int main() {
    float *vec;
    int n;
    printf("Qual o tamanho do vetor? ");
    scanf("%d", &n);

    vec = malloc(sizeof(double)*n);
    for (int i = 0; i < n; i++)
        scanf("%f", &vec[i]);

    printf("Media: %f\n", average(vec, n));
    printf("Desvio Padrao: %f\n", std_deviation(vec, n));
    printf("Maximo: %f\n", max(vec, n));
    printf("Minimo: %f\n", min(vec, n));

    return 0;
}
