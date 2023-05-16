//Accept number of rows and columns from user and display below pattern

/*
    Input :
    iRow = 4    iCol = 5

    Output :
    2   4   6   8   10
    1   3   5   7   9
    2   4   6   8   10
    1   3   5   7   9
*/  
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i, j;
    int num = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i%2==0)
        {
            num =1;
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",num);
            num = num +2;
        }
        }
        else
        {
            num =2;
            for (j = 1; j <= iCol; j++) 
            {
                printf("%d\t", num);
                num += 2;
            }   
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