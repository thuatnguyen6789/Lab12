#include <stdio.h>
#include <string.h>

void main ()
{
	int i;
	char name[5][20];
	void uppername(char name_arr[]);
	
	for (i = 0; i < 5; i++)
	{
		printf("\n Enter string %d: ", i + 1);
		scanf("%s", name[i]);
	}
	
	for (i = 0; i < 5; i++)
	{
		uppername(name[i]);
		printf("\n New string %d: %s", i + 1, name[i]);
	}
	getch();
}

	void uppername(char name_arr[])
	{
		int x;
		for (x = 0; name_arr[x] != '\0'; x++)
		{ if (name_arr[x] >= 97 && name_arr[x] <= 122)
		name_arr[x] = name_arr[x] - 32;
		}
	}
