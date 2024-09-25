#include<stdio.h>

 int FactorialDiff(int iNo)
{
    int iCnt =0;
    int EvenFact = 1;
    int OddFact=1;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    for (iCnt=iNo;iCnt>=1;iCnt--)
    {
        if((iCnt%2)==0)
        {
            EvenFact = EvenFact*iCnt;
        } 
        else
        {
            OddFact= OddFact*iCnt;
        }
    }    
    return EvenFact-OddFact;
}
int main()
{
    int iValue = 0, iRet =0;
    printf("Enter Number :\n ");
    scanf("%d",&iValue);
    iRet=FactorialDiff(iValue);
    printf("Enter Factorial number is %d",iRet);
    return 0;
}