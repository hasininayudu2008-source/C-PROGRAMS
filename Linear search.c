#include <stdio.h>

int main() {
    int a[100], n, key, i, flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        printf("Element %d found at position %d\n", key, i + 1);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
