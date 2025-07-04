#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr; // arr is same as &arr[0]

    printf("arr[0] = %d\n", arr[0]);     // 10
    printf("*p = %d\n", *p);             // 10

    printf("arr[1] = %d\n", arr[1]);     // 20
    printf("*(p + 1) = %d\n", *(p + 1)); // 20

    printf("arr[2] = %d\n", arr[2]);     // 30
    printf("*(p + 2) = %d\n", *(p + 2)); // 30

    return 0;
}
