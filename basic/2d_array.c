#include <stdio.h>

int main() {
    int arr[3][2];
    
    // Input values into the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter the value for element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Display the values of the 2D array
    printf("The values in the array are:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Element [%d][%d]: %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
