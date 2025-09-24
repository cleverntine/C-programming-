#include <stdio.h>

int main() {
/* Author: Cleverntaine mwende 
   Course: Bachelor of science in information technology 
   Registration number: CT100/G/26234/25 */

    int age;
    float income;

    printf("Enter Your age: ");
    scanf("%d", &age);

    printf("Enter Your annual income: ");
    scanf("%f", &income);

    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}