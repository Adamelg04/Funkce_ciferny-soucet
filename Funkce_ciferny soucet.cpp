#include <stdio.h>
#include <math.h>
void main()
{
	int x;
	int soucet = 0;
	int i;
	printf("Zadejte cislo pro ciferny soucet: ");
	scanf_s("%d", &x);
	for (i=0; x > 0;i++)
	{
		i = x % 10;
		x = x / 10;
		soucet = soucet + i;
	}
	printf("%d", soucet);
	return 0;

}
