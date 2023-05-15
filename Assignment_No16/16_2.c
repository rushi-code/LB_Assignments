//Accept number of rows and columns from user and display below pattern

/*
    Input :
    iRow = 4    iCol = 4

    Output :
    A   B   C   D
    a   b   c   d
    A   B   C   D
    a   b   c   d
    
    
    
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char chc ='A';
    char chs ='a';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t", chs);
                chs++; 
            }
            else
            {
                printf("%c\t", chc);
                chc++; 
            }
        }
        printf("\n");
        chc = 'A'; 
        chs = 'a'; 
    }
}



int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}