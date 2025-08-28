#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int newl = 9;
    arr[4] = newl;

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
