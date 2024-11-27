#include <stdio.h>
int HCF(int a, int b) {
    while (b != 0) {
        int num = b;
        b = a % b;
        a = num;
    }
    return a;
}
int main() {
    int num1, num2, hcf;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    hcf = HCF(num1, num2);
    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
