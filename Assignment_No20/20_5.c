#include<stdio.h>
void DisplaySchedule(char chDiv)
{
    if((chDiv=='A')||(chDiv=='a'))
    {
        printf("Your exam is at 7AM");
    }

    else if((chDiv=='B')||(chDiv=='b'))
    {
        printf("Your exam is at 8:30AM");
    }

    if((chDiv=='C')||(chDiv=='c'))
    {
        printf("Your exam is at 9:20AM");
    }

    if((chDiv=='D')||(chDiv=='d'))
    {
        printf("Your exam is at 10:30AM");
    }

}


int main()
{
    char cValue = '\0';
    

    printf("Enter Your Division:\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    
    return 0;
}