/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define MAX 1000


int main()
{
    
    int buf[MAX][MAX];
    int i, j, col;
    int num = 1;
    
    printf("How many coluns do you want? \n");
    scanf("%d", &col);
    
    for(i = 0; i < col; i++)
    {
        for(j = 0; j <= i; j++)
        {
         
         buf[i][j] = num;
         num++;
         
        }
    }
    
    
    for(i = 1; i <= col; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", buf[i-1][j-1]);
            if(j%i == 0)
            {
                printf("\n");
            }
        }
    }
}
