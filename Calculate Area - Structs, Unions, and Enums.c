#include<stdio.h>
#include<math.h>
#define PI 3.14 

struct Shape { 
    union dimensions { 
        float length;
        float radius;
    }d;
    float width;
    enum type {
    circle=1,
    rectangle
    }t;
}s;

int main () {
    struct Shape s;
    float area1,area2;
    scanf("%d",&s.t); 
    
    switch(s.t) {
        case 1:
           scanf("%f",&s.d.radius);
           area1 = PI * pow(s.d.radius,2);
           printf("Area of the circle: %.4f units\n",area1); 
           break;
        case 2:
           scanf("%f %f",&s.d.length,&s.width);
           area2 = s.d.length * s.width;
           printf("Area of the rectangle: %.4f units\n",area2); 
           break;
        default:
           printf("Invalid choice!"); 
           break;
    }
    
    return 0;
}


