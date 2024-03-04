#include <stdio.h>
#include <stdbool.h>

int n;
bool isPowerOfTwo(int n);

int main() {
    printf("Enter the number\n");
    scanf("%d", &n);
    if (isPowerOfTwo(n)) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}

bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0); // Corrected expression with parentheses
}
