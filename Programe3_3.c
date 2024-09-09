// Write a programe which accept number from user and print even factors of that number.
// Input : 36  Output : 2 6 12 18
#include<stdio.h>
void DisplayEvenFactor(int iNO)

{
    int i =0;
    if (iNO<=0)
    {
        iNO = -iNO;
    }
    for (i=1;i<=iNO;i++)
    { 
      if ((iNO%i)==0 &&(i%2)==0)
    {
        printf("%d\t",i);
    }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;

}