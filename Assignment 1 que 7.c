#include <stdio.h>

int main() {
    int choice, num;
    printf("1. Binary to Decimal\n2. Decimal to Binary\n");
    scanf("%d", &choice);  
    if (choice == 1) {
        
        printf("Enter binary number: ");
        scanf("%d", &num);

        int decimal = 0, base = 1;
        while (num > 0) {
            decimal += (num % 10) * base;  
            num /= 10;  
            base *= 2;  
        }
        printf("Decimal: %d\n", decimal);  
        
    } else if (choice == 2) {
        printf("Enter decimal number: ");
        scanf("%d", &num);

        int binary = 0, base = 1;
        while (num > 0) {
            binary += (num % 2) * base;  
            num /= 2;  
            base *= 10;  
        }
        printf("Binary: %d\n", binary);  
        
    } else {
        printf("Invalid choice.\n");  
    }

    return 0;
}
