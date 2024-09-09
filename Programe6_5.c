#include<stdio.h>

void PrintNumberWords(int iNo)
{
    int iCnt =0;
    for (iCnt=10;iCnt>=1;iCnt--)
    {  
      printf("%d\n",iNo*iCnt);
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