#include<stdio.h>
int main()
{
	int i;
	char *a;
	a = "I am a student!";
	printf("%s\n", a);
	for (i=0; *(a + i) != '\0'; i++)
		printf("%c\n", *(a + i));
}