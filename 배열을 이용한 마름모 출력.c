/******************************************************************************
file: 배열을 이용한 마름모 출력.c
page: p350
Description: 2차 배열을 이용한 마름모 출력하기 프로그램입니다.
            그림을 그린후에 별이 들어갈 공간에 배열 인덱스를 다 적고
            for loop을 돌릴때 마름모 패턴으로 숩게 *을 찍을수 있다. 
            
Addition: 한 번에 다 못 풀고 책을 본 결과,
          이 코딩을 한 그 다음날에 한 번도 시도하길 바람.
*******************************************************************************/

//       *     // 3 space * 3 space
//      * *    // 2 space * 1 space * 2 space
//     *   *   // 1 space * 3 space * 1 space
//    *     *  // * 5 space *
//     *   *   // 1 space * 3 space * 1 space
//      * *    // 2 space * 1 space * 2 space
//       *     // 3 space * 3 space

#include <stdio.h>
#define X 7
#define Y 7

void main(void)
{
  int i,j,k;  
  char buf[X][Y];
  
  // 초기화
  for(i = 0; i < X; i++)
  {
      for(j = 0; j < Y; j++)
      {
          buf[i][j] = ' ';
      }
  }
  
  for(k = 0; k< X; k++)
  {
      // 위 꼬깔을 배열에 저장
      if(k<=3)
      {
          buf[k][3-k] = '*';
          buf[k][3+k] = '*';
          
      }
      // 아래 꼬깔을 배열에 저장
      else
      {
          buf[k][k-3] = '*';
          buf[k][9-k] = '*';
      }
  }
  
  //출력
  for(i = 0; i < X; i++)
  {
      for(j = 0; j < Y; j++)
      {
            printf("%c", buf[i][j]);
      }
      //이거 위치 중요함
      printf("\n");
  }
}
