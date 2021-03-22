#include <stdio.h>
int Strlen(const char* str)
{
	if (*str == '\0')
		return 0;
	else return 1 + Strlen(str + 1);
}
int main()
{
	char* p = "";
	int len = Strlen(p);
	printf("%d\n", len);
	return 0;
}