#include <stdio.h>
int main(){
    printf("\t\tAbCd identifier\n");
   char a;
    printf("Enter the Alphabet\t");
scanf("%c",&a);
if (a=='a')
{
    printf("a b c d e f g h i j k l m n o p q r s t u v w x y z ");
}
else if (a=='A')
{
    printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z ");
}
else
{
    printf("Galat hai bhai");
}


return 0;
}