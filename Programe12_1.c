#include<stdio.h>
void Pattern(int iNo)
{ 
    int iCnt = 0;
    char Ch = 'A';
    for ( iCnt =0; iCnt<iNo; iCnt++)
    {
        printf("%c",Ch);
        Ch++;
    }
    printf("\n");
    
}
int main()
{
    int iValue = 0;
    printf("Enter number of elements");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}