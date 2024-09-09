// 1) Programe to divide two numbers.
#include<stdio.h>
int Devide(int iNo1, int iNo2)
{
    int iAns =0;
    if (iNo2==0)
    {
        return 0;
    }
    iAns = iNo1/iNo2;
    return iAns;
}

int main()
{
  int iValue1 =15;
  int iValue2 = 5;
  int iRet =0;
  iRet = Devide(iValue1, iValue2);
  printf("Divide is %d",iRet);


    return 0;

}


