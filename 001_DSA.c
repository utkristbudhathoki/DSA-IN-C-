// FOR CHECKING MAXIMUM NUMBER
#include <stdio.h>

int main() {
    int a[4], i;
    int max;

    
    for (i = 0; i < 4; i++) {
        printf("Enter an element: ");
        scanf("%d", &a[i]);
    }

    
    printf("\nElements are:");
    for (i = 0; i < 4; i++) {
        printf("\n%d", a[i]);
    }


    max = a[0];
    for (i = 1; i < 4; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("\n\nMAXIMUM NUMBER IS: %d", max);

    return 0;
}
