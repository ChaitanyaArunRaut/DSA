// Accept number form user and display itd factors int decreasing order .

#include<stdio.h>
void FactRet(int iNo)
{
    int iCnt =0;
    for (iCnt=iNo; iCnt>1;iCnt--)
    {
        if (iNo%iCnt==0)
        {
           printf("%d\n",iCnt);

       }
        
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter number ");
    scanf("%d",&iValue);
    FactRet(iValue);

    return 0;
}