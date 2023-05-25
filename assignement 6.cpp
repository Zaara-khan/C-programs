#include <stdio.h>

int main() {
    int arr[] = {10, 20, 10, 20, 30, 20, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    int frequency = 0;
    int i;

    printf("Enter the element to find its frequency: ");
    scanf("%d", &target);

    // Iterate through the array and count occurrences of the target element
    for (i = 0; i < size; i++) {
        if (arr[i] == target) {
            frequency++;
        }
    }

    printf("Frequency of %d: %d times\n", target, frequency);

    return 0;
}

