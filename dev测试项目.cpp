#include<stdio.h>
#include<string.h>
struct person
{
	char str[100];
	int name[3];

};
int main()
{
	struct person abc = {"djaklsdj",1};
	struct person* abb1 = &abc;
	//printf("%s %d\n", &abb1->str[0], &abb1->name);
	printf("%s\n", &(abb1).str);
	printf("%d", abc[0].name[0]);


}

