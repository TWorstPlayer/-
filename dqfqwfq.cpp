#include<stdio.h>
#include <stdlib.h>
#include <time.h> 
int main(){
int temp;
int cards[3]={3,5,1};
    int i, j, t;
	for (j = 1; j <= 2; j++)
		for (i = 1; i <= 3 - j; i++)
			if (cards[i] > cards[i + 1])
			{
				t = cards[i]; cards[i] = cards[i + 1]; cards[i + 1] = t;
			}
	
	for (i = 1; i < 3; i++)
		printf("%d ", cards[i]);
}
