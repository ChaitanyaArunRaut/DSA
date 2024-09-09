// write a programe which accept number from user and display all its non factors.
// Accept number form user and display itd factors int decreasing order .

#include<stdio.h>
void NonFact(int iNo)
{
    int iCnt =0;
    for (iCnt=iNo; iCnt>1;iCnt--)
    {
        if (iNo%iCnt!=0)
        {
           printf("%d\n",iCnt);

       }
        
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter number ");
    scanf("%d",&iValue);
    NonFact(iValue);

    return 0;
}