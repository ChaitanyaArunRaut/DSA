#include<stdio.h>
#define one$ 70
int  Dollar(int iNo)
{
    if (iNo>0)
    {
        iNo= iNo*one$;
    }
    return iNo;
      
}
int main()
{
    int iValue = 0, iRet =0;
    printf("Enter Number of USD : ");
    scanf("%d",&iValue);
    iRet = Dollar(iValue);
    printf("Value int INR is %d",iRet);

    return 0;
}