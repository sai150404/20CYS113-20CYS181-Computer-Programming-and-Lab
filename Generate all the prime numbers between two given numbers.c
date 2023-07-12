#include<stdio.h>

int isprime(n) {
    if (n<=0) {
        return 0; 
    }
    for(int i=2;i*i<=n;i++){ 
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void generateprime(j,k) {
    int n;
    printf("Prime numbers between %d and %d are: " ,j,k);
    for(n=j;n<=k;n++) {
        if(isprime(n)){ 
            printf("%d\t",n);
        }
    }
    printf("\n");
}
int main() {
    int j,k;
    scanf("%d",&j); 
    scanf("%d",&k); 
    
    generateprime(j,k); 
    return 0;
}


