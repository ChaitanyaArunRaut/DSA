#include<stdio.h>

 int OddFactorial(int iNo)
{
    int iCnt =0;
    int iFact = 1;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    for (iCnt=iNo;iCnt>=1;iCnt--)
    {
        if((iCnt%2)!=0)
        {
            iFact = iFact*iCnt;
            printf("%d\t",iCnt);
        } 
    }    
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet =0;
    printf("Enter Number :\n ");
    scanf("%d",&iValue);
    iRet=OddFactorial(iValue);
    printf("Enter Factorial number is %d",iRet);
    return 0;
}