#include<stdio.h>

 int EvenFactorial(int iNo)
{
    int iCnt =0;
    int iFact = 1;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    for (iCnt=iNo;iCnt>=iNo;iCnt--)
    {
        if((iCnt%2)==0)
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
    iRet=EvenFactorial(iValue);
    printf("Enter Factorial number is %d",iRet);
    return 0;
}