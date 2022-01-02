  #include<stdio.h> 
//  input=3
//  output=1 2 3

//  input=5
//  output=1 2 3 4 5
// 

  void Display(int ivalue)
  {
    int i=0;
    if (ivalue==0)          //filter
    {
        printf("you enterd number= 0\n");
        return;
    }
    
    if(ivalue<0)            // updator
    {
        ivalue=-ivalue;
    }

    for(i=1;i<=ivalue;i++)
    {
        printf("%d \n",i);
        
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