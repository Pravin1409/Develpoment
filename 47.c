#include<stdio.h>
void Display(int iRow ,int iCol)
{
  if (iRow!=iCol)
  {
      return;
  }
  
    int i=0, j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i>=j)
            {
                printf("$\t");
            }
            
        }
        printf("\n");
    }

}

int main()
{
    int ivalue1=0;
    int ivalue2=0;
    printf("Enter row no\n");
    scanf("%d",&ivalue1);

      printf("Enter col no\n");
    scanf("%d",&ivalue2);

    Display(ivalue1,ivalue2);
     return 0;
}