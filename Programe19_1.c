#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int i = 0, iSumEven= 0, isumOdd= 0;
    for(i =0; i<iLength; i++)
    {
        if((Arr[i]%2)==0)
        {
            iSumEven = iSumEven+Arr[i];
        }
        else
        {
            isumOdd = isumOdd+Arr[i];
        }
    }
    return iSumEven - isumOdd; 
}
int main()
{
    int iSize= 0, iRet= 0, iCnt = 0;
    int *p= NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize* sizeof(int));

    printf("Enter element : \n");
     for(iCnt= 0; iCnt<iSize;iCnt++)
     {
       printf("Enter element : %d",iCnt+1);
       scanf("%d",&p[iCnt]);
     }

     iRet = Difference(p,iSize);
     printf("Result is %d",iRet);
     free(p);

     return 0;

}