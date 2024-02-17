/*1. Write a C program to check whether an 
alphabet is a vowel or a consonant.
Test Data :
k
Expected Output :
The alphabet is a consonant.
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any chracter:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'u':
        {
            printf("The alphabet is a vowel.");
            break;
        }
        default:
        printf("The alphabet is a consonant.");

    }
    return 0;
}