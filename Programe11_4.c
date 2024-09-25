#include<stdio.h>
int MultDigit(int iNo)
{
    int iMult = 1;
    while (iNo>0)
    {
        int Digit = iNo%10;
        iMult*= Digit;
        iNo = iNo/10;

    }
    return iMult;
    
}

int main()
 {
    int iValue = 0;
    int iRet = 0;
    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);
    printf("%d",iRet);

    return 0;
}