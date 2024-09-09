#include<stdio.h>

void Number(int iNo)
{
    if (iNo<50)
{
    printf("%d is Small Number",iNo);

}
else if (iNo>50 && iNo<100)
{
    printf("%d is a Meadium number",iNo);
}
 else
 {
    printf("%d is Larage Number",iNo);
 }  
}
int main()
{
    int iValue = 0;
    printf("Enter Number :\n ");
    scanf("%d",&iValue);
    Number(iValue);

    return 0;
}