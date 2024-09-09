// Accept number from user and check whether number is Even or Odd
#include<stdio.h>
#include<stdbool.h>
bool CheckEven(int iNo)
{
    if(iNo % 2 ==0)
    {
      return true; 
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    if (bRet==true)
    {
        printf("%d is an Even number",iValue);
    }
    else
    {
        printf("%d is an Odd Number", iValue);
    }

    return 0;
}