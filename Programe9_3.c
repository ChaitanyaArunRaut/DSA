// Write a programe which accept range from user and return additon of all numbers in between that range.
#include<stdio.h>
int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    if(iStart<0|| iEnd<0)
    {
    printf("Invalid  Range \n");
    }
     for ( iCnt = iStart; iCnt <= iEnd;iCnt++)
     {
        iSum +=iCnt;
     }
     
    
}
int main()
{
    int iValue1= 0, iValue2 =0, iRet = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    printf("Addtion is %d",iRet);

    return 0;

}