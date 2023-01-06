#include <stdio.h>

int main()
{int fool = 0;
 int inch = 0;
 
 printf("请输入您的身高几英尺几英寸例如3 1\n");
 scanf("%d %d", &fool, &inch);
 int change = fool + inch;
 
 printf("%d",change);
  return 0;
}
