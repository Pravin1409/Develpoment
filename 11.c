  #include<stdio.h> 
  void Display(int ivalue)
  {
    int i=0;
    //   1       2     3
    for(i=1;i<=ivalue;i++)
    {
        printf("marvellous\n"); // 4
      
    }
  }


  int main()
  {
      int ino=0;
      printf("enter the number=");
      scanf("%d",&ino);

      Display(ino); // function call
      return 0;
  }