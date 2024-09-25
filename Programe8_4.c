#include<stdio.h>
 double FhtoCs(float fTemp)
{
    
    return (fTemp-32)*5/9;
       
}
int main()
{
    float fValue = 0.0;
    double dRet =0.0;
    printf("Enter Tempreture in Fahrenheit :\n ");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    printf("Tempreture in ceclcius  %f",dRet);
    return 0;
}