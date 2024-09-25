#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength)
{
    int i=0;
    int iEven= 0, iOdd=0;
   
    for(i=0;i<iLength;i++)
    {
        if((Arr[i]%2==0))
        {
            iEven++;
        }
     else
     {
        iOdd++;
     }
    }
   return iEven -iOdd;
}
int main()
{
    int iSize=0,iCnt=0, iRet =0;
    int *p=NULL;

     
    printf("Enter number of elements that you want\n");
    scanf("%d",&iSize);

   
    p=(int *)malloc(iSize *sizeof(int));

    printf("enter the elements\n"); 
    for( iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    
    iRet = CountEven(p,iSize);
    printf("Frequency of even numbers are : %d",iRet);
   
   
    free(p);

    return 0;

}
