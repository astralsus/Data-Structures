#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int i, n = 5, pos = 3, elem = 99;
    
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    n++;
    
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
