// Accept one number from user and print that number of * on screen.
#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    while ( iCnt<iNo )
    {
        printf("*\t");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}