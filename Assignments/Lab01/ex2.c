#include <stdio.h>

void PrintSequence(int n) {
    if (n == 0) return;

    printf("A%d", n);
    PrintSequence(n-1);

    printf("B%d", n);
}

int main() {

    int n;
    printf("Digite n: ");
    scanf("%d", &n);

    PrintSequence(n);

    return 0;
}
