#include<stdio.h>
#define SqFeet 0.0929
 double SquareMeter(double dNo)
{
    if (dNo>0.0)
    {
        dNo = dNo*SqFeet;
    }
  return dNo;     
}
int main()
{
    int iValue = 0;
    double dRet =0.0;
    printf("Enter Area of Square Feet  ");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);
    printf(" %f",dRet);
    return 0;
}