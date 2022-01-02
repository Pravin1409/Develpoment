  #include<stdio.h> 
//  input=3
//  output=1 2 3

//  input=5
//  output=1 2 3 4 5
// 

  void Display(int ivalue)
  {
    int i=0;

    if(ivalue<0)           //
    {                      //
        ivalue=-ivalue;    //UPDATOR
    }                      //


    for(i=1;i<=ivalue;i++)
    {
        printf("%d \n",i);  // For loop body
        
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