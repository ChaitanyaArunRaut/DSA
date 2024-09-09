// Write programe which accept N and print first 5 Multipls on Screen.
#include<stdio.h>

void MultiDisplay(int iNo)
{
    int iCnt =0;
    for (iCnt=1; iCnt<=5;iCnt++)
    {
      printf("%d\t",iNo*iCnt);   
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter Number :\n ");
    scanf("%d",&iValue);
    MultiDisplay(iValue);

    return 0;
}