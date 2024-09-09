
#include<stdio.h>

void PrintNumberWords(int iNo)
{
    char *ones[]={"","one","two","three","four","five","six","Seven","eight","nine"};
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo>0)
    {
        printf("%s",ones[iNo]);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number :\n ");
    scanf("%d",&iValue);
    PrintNumberWords(iValue);

    return 0;
}