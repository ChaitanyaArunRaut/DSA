
//  Accept number from user and return difference between summation of all its factors and non factors
#include<stdio.h>
int SumNon(int iNo)
{
    int iCnt =1;
    int iSumFact = 0;
    int SumNon =0;    
    for (iCnt = 1;iCnt<=iNo;iCnt++)
    {
     if (iNo%iCnt==0)
     {
         iSumFact= iSumFact+iCnt;
        
     }
     else
     {
        iSumFact = SumNon+iCnt;
     }
    }
    return iSumFact+SumNon;
   
    
    
   
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