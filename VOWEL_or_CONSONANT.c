#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':printf("VOWEL");break;
        case 'e' :printf("VOWEL");break;
        case 'i':printf("VOWEL");break;
        case 'o': printf("VOWEL");break;
        case 'u':printf("VOWEL");break;
        default:printf("CONSONANT");
    }
}