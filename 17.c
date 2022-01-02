 #include<stdio.h>
 #include<stdbool.h>
  bool CheckEven(int);
  int main()
  {
    int ino=0;
    bool bRet=false;


      printf("enter the number=");
      scanf("%d",&ino);

      bRet=CheckEven(ino);
     if(bRet==true)
     {
         printf("%d is even number",ino);
     }
     else
     {
         printf("%d is not even",ino);
     }
   
      return 0;
  }


    bool CheckEven(int ivalue)
  {
   if((ivalue%2)==0)
   {
       return true;
   }
   else
   {
       return false;
   }
   
  }
 