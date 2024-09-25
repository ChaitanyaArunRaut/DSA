//Updates  keyboard shortcuts … On Thursday 1 August 2024, Drive keyboard shortcuts will be updated to give you first-letter navigation.Learn more
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
    int i=0;
   
   printf("Numbers which are divisible by 5 are:\n");
    for(i=0;i<iLength;i++)
    {
        if((Arr[i]%5==0))
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



