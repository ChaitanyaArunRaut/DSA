#include<stdio.h>
int CountDiff(int iNo)
{
    int iSumEven = 0;
    int iSumOdd =0;
    while (iNo>0)
    {
        int iDigit = iNo%10;
       if(iDigit%2==0)
       {
          iSumEven +=iDigit;
       }
       else 
       {
        iSumOdd+=iDigit;
       }
       iNo= iNo/10;
       

    }
    return iSumEven-iSumOdd;
    
}

int main()
 {
    int iValue = 0;
    int iRet = 0;
    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d",iRet);

    return 0;
}