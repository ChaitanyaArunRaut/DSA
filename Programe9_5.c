#include<stdio.h>
int RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt=0, iSum= 0;
    for ( iCnt = iEnd; iCnt>=iStart;iCnt--)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
   int iValue1 =0, iValue2 = 0,iRet =0;
   printf("Enter starting point");
   scanf("%d",&iValue1);

   printf("Enter ending point");
   scanf("%d",&iValue2);

   iRet = RangeDisplayRev(iValue1,iValue2);
   printf("Addition is %d",iRet);

    return 0;
}