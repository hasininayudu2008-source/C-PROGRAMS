#include <stdio.h>
int main()
{
	char ch;
	char str[24];
	char sentence[100];
	scanf("%c%s",&ch,str);
	scanf("\n");
	getchar();
	scanf("%[^\n]%*c",sentence);
	printf("%c\n",ch);
	printf("%s\n",str);
	printf("%s\n",sentence);
	return 0;
}