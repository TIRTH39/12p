#include<stdio.h>

main()
{
    char ch;
	printf("entre value=");
	scanf("%c",&ch);

	if(ch>='a' && ch<='z')
	{
		printf("%c is small Alphabet");
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("%c is capital Alphabet");
    }
	else if(ch>='0' && ch<='9999')
	{
		printf("%c no. is digit");
	}
}      
