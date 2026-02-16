#include <stdio.h>

int main() {
    int a[10], pos, num, i, flag = 0;

    // Input array elements
    printf("Enter 10 elements of array:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }

    // Print original array
    printf("Original Array: ");
    for(i = 0; i < 10; i++){
        printf("%d\t", a[i]);
    }

    // Number to delete
    printf("\nEnter Number to be deleted: ");
    scanf("%d", &num);

    // Search for number
    for(i = 0; i < 10; i++) {
        if(a[i] == num) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("\nElement not found\n");
    else {
        // Shift elements left to delete
        for(; i < 9; i++)
            a[i] = a[i+1];

        // Print modified array
        printf("\nModified Array is: ");
        for(i = 0; i < 9; i++)
            printf("%d\t", a[i]);
       
    }

    return 0;
}
