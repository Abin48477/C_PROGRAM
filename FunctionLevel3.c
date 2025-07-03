//📌 Example 3: With return value
#include <stdio.h>

int square(int x) {
    return x * x;
}

int main() {
    int result = square(6);
    printf("Square = %d\n", result);
    return 0;
}
