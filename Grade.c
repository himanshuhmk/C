#include <stdio.h>
int main(){
    printf("Your Grade\n");
    printf("Enter your Number>>");
    float Number;
    scanf("%f",&Number);
if (Number>=90)
{
    printf("You Got 'A'");
        }
        else if (Number==80||80>=90)
        {
        printf("You Got 'B'");
        }
        else if (Number==70||70>=80)
        {
        printf("You Got 'C'");
        }
        else if (Number==60||60>=70)
        {
        printf("You Got 'D'");
        }
        else if (Number==50||50>=60)
        {
        printf("You Got 'E'");
        }
        else
        {
            printf("Invalid");
        }
        

return 0;
}