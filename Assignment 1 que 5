#include <stdio.h>
int perfect(int n){
    int result;
    int count = 0;
    int i;
    for(i=1;i<n;i++){
        if(n%i == 0){
            count += i;
        } 
      }
    if (count == n){
        printf("%d is a perfect Number",n);
    }
    else{
        printf("%d is not a perfect Number",n);
    }
}

int main() {
    int n;
    
    printf("Enter the Integer--> ");
    scanf("%d", &n);

    perfect(n);
    return 0;
}
