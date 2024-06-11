#include<stdio.h>

void squareArray(int *array, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(array + i) *= *(array + i);
    }
}

int main() {
    int size, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    squareArray(array, size);

    printf("Squared array elements:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

}