#include <stdio.h>
int main(){
    int Rating;
    printf("Sir Please Enter You Rating (1*-5*\n");
    scanf("%d",&Rating);
    switch (Rating)
    {
    case 1:
        printf("One star");
        break;
         case 2:
        printf("Two star");
        break;
         case 3:
        printf("Three star");
        break;
         case 4:
        printf("Four star");
        break;
         case 5:
        printf("Five star, Thank you Sir");
        break;
    
    default: printf("You have entered a wrong Input\n");
        break;
    }
return 0;
}