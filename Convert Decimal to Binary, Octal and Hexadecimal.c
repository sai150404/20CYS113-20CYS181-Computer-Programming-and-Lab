#include<stdio.h>
void decimalToBinary(int decimal) {
    if (decimal > 1)
        decimalToBinary(decimal / 2); 

    printf("%d", decimal % 2);
}

void decimalToOctal(int decimal) {
    if (decimal > 7)
        decimalToOctal(decimal / 8); 

    printf("%d", decimal % 8);
}

void decimalToHexadecimal(int decimal) {
    if (decimal > 15)
        decimalToHexadecimal(decimal / 16); 

    int remainder = decimal % 16;

    if (remainder < 10)
        printf("%d", remainder);
    else
        printf("%c", 'A' + remainder - 10); 
}
        
int main() {
    int decimal;
   
    scanf("%d", &decimal); //Input in decimal
    if(decimal<=0){
        printf("Error: Value should be greater than 0\n"); 
    }
    else {
    printf("Binary equivalent: ");
    decimalToBinary(decimal); 
    
    printf("\nOctal equivalent: ");
    decimalToOctal(decimal); 
    
    printf("\nHexadecimal equivalent: ");
    decimalToHexadecimal(decimal); 
    }
    
    return 0;
}

