#include<stdio.h>

int palindromecheck(int n) { 
    int normal = n;
    int reverse = 0;
    
    while (n>0) {
        int remainder = n%10;
        reverse = reverse*10 + remainder;
        n = n/10; 
    }
    
    if (normal == reverse) { 
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int num;
    scanf("%d",&num); 
    
    if (num<0) {
        num = -num; 
    }
    
    if (palindromecheck(num)) { 
        printf("Is a palindrome.");
    }
    else {
        printf("Is not a palindrome.");
    } 
}


