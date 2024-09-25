#include<stdio.h>
void Pattern(int iRow , int iCol)
{
    int i = 0, j=0;
    int Num1 =1;
    int Num2 =1;
    if (iRow!= iCol)
    {
        printf("Number of rows and number of columns should be same\n");
        return;
    }
    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if (i%2==0)
            {
                printf("%d\t",Num2++);
            }
           
            else
            {
                printf("%d\t",--Num1-1);
            }
        }
        printf("\n");
        Num1 =1;
        Num2 =1;
    }
    
}
int main()
{
    int iValue1= 0, iValue2 = 0;
    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}