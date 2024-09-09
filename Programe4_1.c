// Accept number from user and display its multiplication of factors.
// Input 12   Output 144

#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt =1;
    int iFact = 1;
    
    for (iCnt = 1;iCnt<iNo;iCnt++)
    {
     if (iNo%iCnt==0)
     {
        iFact= iFact*iCnt;
        
        printf("%d\n",iCnt);
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

    iRet = MultFact(iValue);
    printf("%d\n ",iRet);


    return 0;

}