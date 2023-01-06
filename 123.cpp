#include<stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{
  int playerinput = -1;
  int cyclecount = 0;
  srand((unsigned)time(NULL));
  int number= rand()%10;
  do
   {
  cyclecount++;
  printf("请输入一个数字");
  scanf("%d",&playerinput);
  
  if(playerinput>number) 
  {
   printf("大了");
   
  }
  else if(playerinput<number)
  {
   printf("小了"); 
  }
  else
  {printf("你猜对了"); 
  }while(cyclecount<=3);
}
 
  
 
}

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
   
 
 
