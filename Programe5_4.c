//
// Accept number from user and print all Odd Numbers up to N.
#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt =0;
    for (iCnt=-1; iCnt<=iNo;iCnt++)
    {
        if (iCnt%2!=0)
      {  printf("%d\t",iCnt);

      }
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter Number :\n ");
    scanf("%d",&iValue);
    OddDisplay(iValue);

    return 0;
}