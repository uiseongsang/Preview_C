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
    
    printf("How many coluns do you want? ");
    scanf("%d", &col);
    printf("\n");
    
    
    //description: 초기화 과정, 0으로 채움
    for(i = 0; i < col; i++)
    {
        for(j = 0; j <= i; j++)
        {
         buf[i][j] = 0;
        }
    }
    
    // 사용되는 배열 구성에 1부터 정수를 입력함
    for(i = 0; i < col; i++)
    {
        for(j = col - i - 1 ; j < col; j++)
        {
         buf[i][j] = num++;
        }
    }
    
    
    // 출력
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(buf[i][j] == 0 )
            {
                printf("   ");
            }
            else
                printf("%d ", buf[i][j]);
        
        }
                printf("\n");
        
    }
}
