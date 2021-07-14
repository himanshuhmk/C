#include <stdio.h>
int main(){
    int b;
    printf("Give me a number\n");
    scanf("%d",&b);
    if (b%2==0)
    {
       printf("%d  is a Even\n",b);
    }
    else 
    {
       printf("%d is a odd\n",b);
    }
    
return 0;
}