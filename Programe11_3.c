#include<stdio.h>
int CountRange(int iNo)
{
    int iCount = 0;
    while (iNo>0)
    {
        int Digit = iNo%10;
        if (Digit>3&&Digit<7)
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

    iRet = CountRange(iValue);
    printf("%d",iRet);

    return 0;
}