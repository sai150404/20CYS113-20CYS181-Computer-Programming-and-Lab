#include<stdio.h>

struct complex { 
    int real;
    int imaginary;
}c;

int main() {
    struct complex c[2]; 
    
    scanf("%d %d",&c[0].real,&c[0].imaginary);
    scanf("%d %d",&c[1].real,&c[1].imaginary); 
    
    int add_real = c[0].real + c[1].real; 
    int add_imaginary = c[0].imaginary + c[1].imaginary; 
    
    int sub_real = c[0].real - c[1].real; 
    int sub_imaginary = c[0].imaginary - c[1].imaginary; 
    
    printf("%d+%di\n",add_real,add_imaginary); 
    printf("%d+%di",sub_real,sub_imaginary);
    
    return 0;
}

