#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int i=0;
   
   printf("Multiples of 11 are:\n");
    for(i=0;i<iLength;i++)
    {
        if((Arr[i]%11==0))
        {
            printf("%d\n",Arr[i]);
        }
     
    }
   
}
int main()
{
    int iSize=0,iCnt=0;
    int *p=NULL;

     
    printf("Enter number of elements that you want\n");
    scanf("%d",&iSize);

   
    p=(int *)malloc(iSize *sizeof(int));

    printf("enter the elements\n"); 
    for( iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    
    Display(p,iSize);
   
   
    free(p);

    return 0;

}



