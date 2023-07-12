#include<stdio.h>
int main()
{
    int rows,space,i,j,k; 
    scanf("%d",&rows); 
    for(i=1;i<=rows;i++)
    {
        k=9; 
        for(space=1;space<=rows-i;space++) 
        {
            printf("  "); 
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d ",k); 
            k--;
        }
        printf("\n");
    }
    for(i=rows-1;i>=0;i--) 
    {
        k=9;
        for(space=1;space<=rows-i;space++)
        {
            printf("  "); 
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d ",k); 
            k--;
        }
        printf("\n");
        
    }
}
