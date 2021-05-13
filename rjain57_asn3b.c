/* CS2211a 2020 */
/* Assignment 03 */
/* Rishabh Jain */
/* rjain57 */
/* Tuesday October 20th */

#include <stdio.h>


// This program calculates the sum of all the prime numbers that are less than or equal to the value entered.
int main() {
    // Declares the variables required
    int sum, j, value, count;
    // While loop
    while (1) {
        // Initializing the sum variable
        sum = 0;
        // Print prompt and get input from user
        printf("Input? ");
        scanf("%d", &value);
        // Exits the program when 0 is entered
        if (value == 0) break;
        // For loop iterating through number 1 to the entered value
        for (int i = 1; i <= value; i++) {
            count = 0;
            // For loop iterating through number 2 to i
            for (j = 2; j <= i; j++) {
                // Performs the modulo operation to check if the remainder is 0
                if (i % j == 0) {
                    // Increases the count by 1
                    count++;
                }
            }
            // if the count is 1, the value i is added to the sum
            if (count == 1) {
                sum = sum + i;
            }
        }
        // Prints out the sum of all the prime numbers less than or equal to the entered value
        printf("The final total is: %d\n", sum);
    }
    return 0;
}
