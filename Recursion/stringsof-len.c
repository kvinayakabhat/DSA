#include <stdio.h>

int A[] = {0, 9, 5, 3};
int n = 2;
int k = 4;

void stringu(int n, int k);

int main() {
    stringu(n, k);
    return 0;
}

void stringu(int n, int k) {
    int i; // Declare loop variable i here
    if (n < 1) {
        for (i = 0; i < 2; i++) {
            printf("%d ", A[i]);
        }
        printf("\n");
    } else {
        for (i = 0; i < k; i++) {
            A[n - 1] = i;
            stringu(n - 1, k);
        }
    }
}
