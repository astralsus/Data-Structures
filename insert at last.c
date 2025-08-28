#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int i, n = 5, elem = 99;
    
    arr[n] = elem;
    n++;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
