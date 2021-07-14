#include <stdio.h>
int main()
{
    printf("CALCULATOR\n");
    char b;
    printf("Enter the Operator (+,-,*,/)>>");
    scanf("%c", &b);
    float a;
    printf("Enter the Number>>");
    scanf("%f", &a);
    
    float c;
    printf("Enter the Number>>");
    scanf("%f", &c);
    switch (b)
    {
    case '+':
       printf("Your Number is %f", a + c);
        break;
    case '-':
       printf("Your Number is %f", a - c);
        break;
        case '*':
       printf("Your Number is %f", a * c);
        break;
        case '/':
       printf("Your Number is %f", a / c);
        break;

    default:  printf("We will work on it");
        break;
    }
    return 0;
}