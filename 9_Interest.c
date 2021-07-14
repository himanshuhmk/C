#include <stdio.h>
int main(){
    float amount;
    float interest;
    float time;
    printf("Simple Interest\n");
    printf("Initial amount>");
    scanf("%f",&amount);
    printf("Rate of interest>");
    scanf("%f",&interest);
    printf("Time (Year)>");
    scanf("%f",&time);
    printf("Simple Interest >%f", amount ( 1 + interest * time));
return 0;
}