#include <stdio.h>

int A[] = {0, 1, 2, 3, 4};
int n = 5;

void binary(int n);

int main() {
    binary(n);
    return 0;
}

void binary(int n) {
    if (n < 1) {
        for (int i = 0; i < 5; i++) {
            printf("%d ", A[i]);
        }
        printf("\n");
    } else {
        A[n - 1] = 0;
        binary(n - 1);
        A[n - 1] = 1;
        binary(n - 1);
    }
}
