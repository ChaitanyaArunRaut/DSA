// Accept number from user and return summation of all its non factors.
#include<stdio.h>
int SumNon(int iNo)
{
    int iCnt =1;
    int iFact = 1;
    
    for (iCnt = 1;iCnt<=iNo;iCnt++)
    {
     if (iNo%iCnt!=0)
     {
        iFact= iFact+iCnt;
        
        printf(" NonSumgFactors are :%d\n",iCnt);
     }
    }
    return iFact;
   
    
    
   
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = SumNon(iValue);
    printf("%d\n ",iRet);


    return 0;

}