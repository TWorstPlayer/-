#include<stdio.h>
#include<math.h>

int main()
{ int a =6;
  int b=-1;
  int c=-1;
  
  printf("������һ��0��10�����֣�\n");
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
   {printf("��¶���\n");
   }
   else if (c==1)
   {printf("��µ����ִ���\n");
   }
   else 
   {printf("��µ�����С��\n");
   }
   
 } 
