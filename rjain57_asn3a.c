/* CS2211a 2020 */
/* Assignment 03 */
/* Rishabh Jain */
/* rjain57 */
/* Tuesday October 20th */

#include <stdio.h>

int main() {
    // Creating the array
    int array[] =  { 12,63,44,89,3,55,73,27,37,18,17,23,25,30,7 };

    // Initializing 2 variables to store the size and length of the array
    int arraySize = sizeof(array), arrayLength = arraySize / sizeof(int);
    printf("\n\nSize of array: %d bytes\n", arraySize);
    printf("Length of array: %d elements\n", arrayLength);

    // Part 1
    printf("\nPART 1:\nThe values store into the array are :\n");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d     ", array[i]);
    }

    // Part 2
    printf("\n\nPART 2:\nThe values store into the array in reverse are :\n");
    for (int i = arrayLength - 1; i >= 0; i--) {
        printf("%d     ", array[i]);
    }

    // Part 3
    printf("\n\nPART 3:\nThe smallest value stored in the array is :\n");
    int smallest = array[0], position = 0;
    for (int i = 0; i < arrayLength; i++) {
        if (smallest > array[i]) {
            smallest = array[i];
            position = i + 1;
        }
    }
    printf("value: %d at the %dth position from the left", smallest, position);

    // Part 4
    printf("\n\nPART 4:\nThe sum (total) value of the array is :\n");
    int arraySum = 0, lastValue = arrayLength - 1;
    for (int i = 0; i < arrayLength - 1; i++) {
        printf("%d + ", array[i]);
        arraySum = arraySum + array[i];
    }
    arraySum = arraySum + array[lastValue];
    printf("%d equals: %d", array[lastValue], arraySum);

    // Part 5
    printf("\n\nPART 5:\nCopy the array into a new array, but in reverse order :\n");
    int reversedArray[arrayLength];

    // Prints the original array and creates the new one
    printf("Original array :\n");
    int reverseCount = arrayLength - 1;
    for (int i = 0; i < arrayLength; i++) {
        printf("%d     ", array[i]);
        reversedArray[reverseCount] = array[i];
        reverseCount--;
    }

    // Prints the new reversed array
    printf("\nNew (Reversed) array :\n");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d     ", reversedArray[i]);
    }

    // Part 6
    printf("\n\nPART 6:\nSwitch the first value in the array with the last value in the array :\n");
    printf("Original array :\n");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d     ", array[i]);
    }
    printf("\nChanged array :\n");
    int firstValue = array[0];
    array[0] = array[arrayLength - 1];
    array[arrayLength - 1] = firstValue;
    for (int i = 0; i < arrayLength; i++) {
        printf("%d     ", array[i]);
    }

    // Part 7
    printf("\n\nPART 7:\nSort the array in ascending order :\n");
    printf("Original array :\n");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d     ", array[i]);
    }

    // Swaps adjacent values in the array that are in descending order until array is in ascending order
    int i, j, tempValue;
    for (i = 0; i < arrayLength - 1; i++) {
        for (j = 0; j < arrayLength - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                tempValue = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tempValue;
            }
        }
    }

    printf("\nChanged array :\n");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d     ", array[i]);
    }
    printf("\n\n");

    return 0;
}
