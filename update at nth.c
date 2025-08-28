#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int pos = 2;
    int newl = 12;

    if(pos >= 0 && pos < 5) {
        arr[pos] = newl;
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
