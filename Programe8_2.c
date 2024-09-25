#include<stdio.h>
 double RetArea(float fWidth, float fHeigth)
{
    float fArea =0.0;
    fArea = fWidth*fHeigth;
    return fArea;
       
}
int main()
{
    float fValue1 = 0.0;
    float  fValue2 = 0.0;
     double dRet =0.0;
    printf("Enter width and  height :\n ");
    scanf("%f %f",&fValue1,&fValue2);

    dRet=RetArea(fValue1,fValue2);
    printf("Area of Circle is %f",dRet);
    return 0;
}