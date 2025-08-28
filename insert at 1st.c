#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int i, n = 5, elem = 99;
    
    for(i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = elem;
    n++;
    
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
