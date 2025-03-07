#include <stdio.h>

void linearSearch(int arr[], int size, int key) {
    int i, found = 0;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element %d found at index %d.\n", key, i);
            found = 1;
            break;  // Stops the search after finding the element
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }
}

int main() {
    int size, i, key;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter %d elements of the array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    linearSearch(arr, size, key);
    
    return 0;
}
