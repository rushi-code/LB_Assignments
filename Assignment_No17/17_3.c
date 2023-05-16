//Accept number of rows and columns from user and display below pattern

/*
    Input :
    iRow = 5    iCol = 5

    Output :
    a   b   c   d   e
    1   2   3   4   5
    a   b   c   d   e
    1   2   3   4   5
    a   b   c   d   e
*/  
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'a';
    int iNum = 1;

    for(i=1; i<=iRow; i++)
    {
        if(i%2==0)
        {
            for(j = 1; j<=iCol; j++)
            {
            printf("%d\t",iNum);
            iNum++;
            }
            iNum = 1;
            
        }
        else
        {
            for(j = 1; j<=iCol;j++)
            {
                printf("%c\t",ch);
                ch++;
            }
            ch='a';
        }
        printf("\n");
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