/* File: Right-angled triangle(0 and 1 pattern)(0).cpp
 *
 * This program is application of * right-angled triangle
 * This program will include read an integer number of rows 
 * If number is even, print 1
 * If number is odd, print 0 
 *
 * ex) row is 4
 * output is 
 * 0
 * 01
 * 010
 * 0101
 *
 */
 
#include <stdio.h>

int main(void)
{
	int i, j, row;
	
	printf("How many rows: ");
	scanf("%d", &row );
	
	for(i = 1; i <= row; i++)
	{
		for(j = 1; j <= i; j++)
		{	
			if(j%2 == 0)
				printf("1");	
			else
				printf("0");
		}		
		printf("\n");
	}
}




