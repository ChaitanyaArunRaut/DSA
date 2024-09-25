#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength,int iNo)
{
    int i=0;
    int iFrequency=0;

    for(i=0;i<iLength;i++)
    {
        if((Arr[i]==iNo))
        {
           iFrequency++;       
        }
    }
    return iFrequency;
}
int main()
{
    int iSize=0,iCnt=0,iRet=0,iValue=0;
    int *p=NULL;
     
    printf("Enter number of elements that you want\n");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize *sizeof(int));

    printf("enter the elements\n"); 
    for( iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    printf("Enter the elements that you want to find the frequency:\n");
    scanf("%d",&iValue);
    iRet=Frequency(p,iSize,iValue);
    printf(" Frequency of Elemet in the array is :%d",iRet);

     free(p);

    return 0;    
}

