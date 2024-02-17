/*Write a program in C to accept a grade and declare the equivalent description using
switch case.
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your grade:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        {
            printf("Average");
            break;
        }
        case 'V':
        {
            printf("very good");
            break;
        }
        case 'F':
        {
            printf("Fail");
            break;
        }
        case 'E':
        {
            printf("Excelant");
            break;
        }
        case 'G':
        {
            printf("Good");
            break;
        }
        default:
        printf("Wrong Input!");
    }
    return 0;

}