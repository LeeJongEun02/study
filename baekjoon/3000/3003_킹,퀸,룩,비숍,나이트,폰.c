#include "stdio.h"
int main(void) {
  /*
    백준 문제 링크 https://www.acmicpc.net/problem/3003
    -- 문제 --
        체스는 킹1, 퀸1, 룩2, 비숍2, 나이트 2, 폰 8개로 구성
        발견된 피스의 개수가 올바른 세트가 되기 위한 개수 구하기
    -- 입력 --
        찾은 킹, 퀸, 룩, 비숍, 나이트, 폰의 개수(0<=num<=10)
    -- 출력 --
        찾은 피스가 올바른 세트가 되기 위한 개수
  */
    int king, queen, rook, bishop, knight, pawn;

    int cnt_king = 1; 
    int cnt_queen = 1;
    int cnt_rook = 2;
    int cnt_bishop = 2;
    int cnt_knight = 2;
    int cnt_pawn = 8;
    
    //     킹 퀸 룩 비숍 나이트 폰
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);

    cnt_king -= king;
    cnt_queen -= queen;
    cnt_rook -= rook;
    cnt_bishop -= bishop;
    cnt_knight -= knight;
    cnt_pawn -= pawn;

    printf("%d %d %d %d %d %d", cnt_king, cnt_queen, cnt_rook, cnt_bishop, cnt_knight, cnt_pawn);
    
  return 0;
}
