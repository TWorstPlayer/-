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
  printf("������һ������");
  scanf("%d",&playerinput);
  
  if(playerinput>number) 
  {
   printf("����");
   
  }
  else if(playerinput<number)
  {
   printf("С��"); 
  }
  else
  {printf("��¶���"); 
  }while(cyclecount<=3);
}
 
  
 
}

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
   
 
 
