#include<stdio.h>
#define KM 1000
 int KMoMeter(int iNo)
{
if (iNo>0)
{
    iNo = iNo*KM;
}
return iNo;
       
}
int main()
{
    int iValue =0, iRet =0;
    printf("Enter Distance :\n ");
    scanf("%d",&iValue);

    iRet=KMoMeter(iValue);
    printf("%d in Meater is :%d",iValue,iRet);
    return 0;
}