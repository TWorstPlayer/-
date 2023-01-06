#include<stdio.h>
#include<math.h>

int main()
{ int a =6;
  int b=-1;
  int c=-1;
  
  printf("请输入一个0到10的数字：\n");
  scanf("%d",&b);
  
  
   if(b==a)
   {c=0;
	} 
   else if(b>=a)
   {c=1;
   }
   else
   {c=-1;
   }
   if(c==0)
   {printf("你猜对了\n");
   }
   else if (c==1)
   {printf("你猜的数字大了\n");
   }
   else 
   {printf("你猜的数字小了\n");
   }
   
 } 
