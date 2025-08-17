#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        int firstTime = 1;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                firstTime = 0;
                break;
            }
        }
        if (firstTime == 1) {
            printf("Element %d occurs %d times\n", arr[i], count);
        }
    }
    return 0;
}
