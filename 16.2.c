 #include<stdio.h>
// input:   1
//output:   1

//input:    
typedef unsigned long int UINT;
 UINT Factorial(int);

/////////////////////////////////////////////////////////////////////
//   Create function
//
//   using typedef unsigned int   
//
//   typedef unsigned ling int UINT;
//
////////////////////////////////////////////////////////////////////

  UINT Factorial(int ivalue)
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
/////////////////////////////////////////////////////////////////
// main function
////////////////////////////////////////////////////////////////

  int main()
  {
      int ino=0;

      UINT iRet=0;

      printf("enter the number=");
      scanf("%d",&ino);

      iRet=Factorial(ino);

      printf("the Factorial is=%ld",iRet);

      return 0;
  }

 