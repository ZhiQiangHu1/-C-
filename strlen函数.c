#include<stdio.h>
int main()
{
	const char* str1 = "abcdeg";
	const char* str2 = "bbb";
	if (strlen(str2) - strlen(str1) > 0)
	{
		printf("str2>str1\n");
	}
	else
	{
		printf("str1>str2\n");
	}
	return 0;
}