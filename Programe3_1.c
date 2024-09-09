//  Write a Programe which accept one number from user and print that number of even number on screen
// Input : 7
// Output : 2 4 6 8 10 12 14

#include<stdio.h>
void PrintEven(int iNo)
{   int iCnt = 0;
    int iNum=2;
    if (iNo<=0)
    {
        return;
    }
    while (iCnt<iNo)
    {
        printf("%d\t",iNum);
        iNum +=2;
        iCnt++;
    }
    
    
}
int main()
{
    int iValue =0;
    printf("Enter number \n");

    scanf("%d",&iValue);    
    PrintEven(iValue);



    return 0;
}