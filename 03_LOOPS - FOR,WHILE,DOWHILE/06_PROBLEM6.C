// 6.	Find the GCD and LCM of two numbers without using built-in functions

// WAS UNABLE TO SOLVE BY MYSELF TAKEN HELP FROM THE AI
#include <stdio.h>

int main() {
    int a, b, temp, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int num1 = a, num2 = b;

    
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    
    lcm = (num1 * num2) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}