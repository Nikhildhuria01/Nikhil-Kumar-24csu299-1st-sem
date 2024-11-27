#include <stdio.h>
#include <math.h>

int armstrong(int n) {
    int result=0;
    int s;
    int num = n;
    while (num!= 0) {
        
        s = num % 10;
        
        result += pow(s,3);
        num /= 10;
        
    }
    if (result == n){
        return printf("%d is an Armstrong number.", n);
    }
    else{
        return printf("%d is not an Armstrong number.", n);
    }
}
int main() {
    int n;
    printf("Enter a Three Digit Integer ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}
