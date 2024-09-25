#include<stdio.h>
int CountEvenDigits(int iNo)
{
    int iCount = 0;
    while (iNo>0)
    {
        if ((iNo%10)%2==0)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
    
}

int main()
 {
    int iValue = 0;
    int iRet = 0;
    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);
    printf("%d",iRet);

    return 0;
}