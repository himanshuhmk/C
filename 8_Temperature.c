#include <stdio.h>
int main(){
    float Celcius;;
    printf("Celcius to fahrenheit\n");
    printf("Celcius>");
    scanf("%f",&Celcius);
    printf("Fahrenheit %f", (9/5 * Celcius) + 32);
return 0;
}