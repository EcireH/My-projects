/*
	[+] Marathon v2.0.0 [+]
	Distance of a marathon in yards
	= Dec 31, 2020 =
	
-- Coded by Eric Henrique	
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int miles, yards;
	double kilometers;

	printf("\nType the miles: ");
	scanf("%i", &miles);

	printf("\nType the yards: ");
	scanf("%i", &yards);

	kilometers = 1.609 * (miles+yards/1760.0);
	printf("\nA marathon is %lf kilometers.\n", kilometers);

	return 0;
}
