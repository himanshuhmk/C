#include <stdio.h>
int main()
{
    printf("\t\t\t\tVowel Identifier\n\n");
    char a;
    printf("Enter the Alphabet>>>");
    scanf("%c",& a);
    switch (a)
    {
    case 'a':
      case 'A':
        case 'E':
          case 'e':
            case 'i':
              case 'I':
                case 'O':
                  case 'o':
                    case 'u':
                      case 'U':

    printf("This is a Vowel.\n");
    break;
    default: printf("This is Not a Vowel.");
        break;
    }
    return 0;
}