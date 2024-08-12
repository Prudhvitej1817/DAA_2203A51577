#include <stdio.h>

int main() {
    int array[100], position, element, n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);

    if (position > n + 1 || position <= 0) {
        printf("Invalid position! Please enter a position between 1 and %d\n", n + 1);
    } else {
        printf("Enter the element to insert: ");
        scanf("%d", &element);

        for (i = n; i >= position; i--) {
            array[i] = array[i - 1];
        }
        array[position - 1] = element;
        n++;

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
    }
    return 0;
}

