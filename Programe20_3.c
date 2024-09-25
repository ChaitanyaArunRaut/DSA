#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int Arr[],int iLength)
{
    int i=0;
   
    for(i=0;i<iLength;i++)
    {
        if((Arr[i]==11))
        {
           break;
        }
     if (i==iLength)
     {
        return false;
     }
     else
     {
         return true;
     }
    }
   
}
int main()
{
    int iSize=0,iCnt=0; 
    bool bRet =false;
    int *p=NULL;

     
    printf("Enter number of elements that you want\n");
    scanf("%d",&iSize);

   
    p=(int *)malloc(iSize *sizeof(int));

    printf("enter the elements\n"); 
    for( iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    
    bRet = Check(p,iSize);
   if (bRet==true)
   {
    printf("11 is Present\n");
   }
   else
   {
    printf("11 is Absent  \n");
   }
   
   
    free(p);

    return 0;

}



