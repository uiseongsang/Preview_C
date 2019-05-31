/* File: Right-angled triangle(0 and 1 pattern).cpp
 *
 * This program is application of * right-angled triangle
 * This program will include read an integer number of rows 
 * If number is even, print 1
 * If number is odd, print 0 
 * It must to be without using Modulus(%) Operator
 * Only use for loop and if statement
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
	int i, j, row, num;
	
	printf("How many rows: ");
	scanf("%d", &row );
	
	for(i = 1; i <= row; i++)
	{
		for(j = 1; j <= i; j++)
		{	
			for( num = j; num > 1; num -= 2)
			{
				// Fucking here....
			}
			if(num == 0)
				printf("1");	
			else
				printf("0");
		}		
		printf("\n");
	}
}




