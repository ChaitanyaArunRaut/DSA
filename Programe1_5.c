// 5) Accetp one number from user and print that number of * on screen
#include<stdio.h>
void Accept(int iNo)
{
    int iCnt =0;
    for(iCnt= 0; iCnt<iNo;iCnt++)
    {
        printf("*");
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    printf("Enter number ");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}