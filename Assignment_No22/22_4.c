//check whether string contains vowels in it or not

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    while(*str!='\0')
    {
        if((*str=='A')||(*str=='a')||(*str=='E')||(*str=='e')||(*str=='I')||(*str=='i')||(*str=='O')||(*str=='o')||(*str=='U')||(*str=='u'))
        {
            return true;
        }
        
        str++;
    }
    return false;
}


int main()
{
    char Arr[20];
    bool bRet = false;

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);
    if(bRet == true)
    {
        printf("It contains vowel\n");
    }
    else
    {
        printf("There is no vowel\n");
    }

    return 0;
   
}