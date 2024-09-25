 #include<stdio.h>
 #include<stdbool.h>
int ChkZero(int iNo)
{
    while (iNo>0)
    {
       if (iNo %10 ==0)
       {
        return false;
       }
       iNo = iNo/10;
       {
        return true;
       }
    }
    
}
 int main()
 {
    int iValue = 0;
    bool bRet = false;
    printf("Enter number ");
    scanf("%d",&iValue);
    if (bRet == true)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
 }