 #include<stdio.h>
// input:   1
//output:   1

//input:    4
//output:   24

    int Factorial(int ivalue)
  {
   int ifact=1;
   int icnt=0;
   if (ivalue<0)     //updator
   {
       ivalue=-ivalue;
   }
   //      1        2         3
    for(icnt=1;icnt<=ivalue;icnt++)
   {
       ifact=ifact*icnt;  // 4
   }
   return ifact;
  }
  
  int main()
  {
      int ino=0,iRet=0;


      printf("enter the number=");
      scanf("%d",&ino);

      iRet=Factorial(ino);

      printf("the Factorial is=%d",iRet);

      return 0;
  }

 