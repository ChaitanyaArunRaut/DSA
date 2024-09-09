// AAccept one number and check whether it is divisible by 5 or not.
#include<stdio.h>
#include<stdbool.h>
int Check(int iNo)
{
    if ((iNo %5)==0)
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
    int  iVlaue = 0;
    int bRet = 0;

    printf("Enter Number ");
    scanf("%d",&iVlaue);

    bRet = Check(iVlaue);

    if (bRet == true)
    {
        printf("Divisible By 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}