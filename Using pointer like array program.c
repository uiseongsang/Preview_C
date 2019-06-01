/* File: Using pointer like array program.c
 * Page number: p401
 * 
 */

#include <stdio.h>

void addr(int);

void main()
{
    int size;
    
    printf("Enter the size: ");
    scanf("%d", &size);
    
	addr(size);
	
}

void addr(int x)
{
	int i = 0;
	int sum = 0;
	char *ptr;
	
	ptr = (char*)malloc(sizeof(char) * x); // value of x allocate dynamic assignment in ptr 
	printf("Enter the number in the allocated memory\n");
    
    while(i < x)
    {
		printf("ptr[%d] => ", i);
    	scanf("%d", &ptr[i]);
    	i++;
	}
    
    for(i = 0; i < x; i++)
    {
    	sum += ptr[i];
	}
	
    printf("The total added value is %d", sum);
}
