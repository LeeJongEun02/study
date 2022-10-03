/*
백준 문제 링크 https://www.acmicpc.net/problem/2908
-- 입력 --
  같지 않은 세 자리 수
-- 출력 --
  역순으로 정렬된 세 자리 수 중 큰 수 출력
*/
#include <stdio.h>

int main(void) {
    int num1 = 0;
    int num2 = 0;
    int big_num = 0;

    scanf("%d %d", &num1, &num2);

    for(int i = 0; i < 3; i++){
        if(num1 % 10 > num2 % 10 && big_num == 0){
            big_num = 1;
        }else if(num1 % 10 < num2 % 10 && big_num == 0){
            big_num = 2;
        }

        if(big_num == 1){
            printf("%d", num1 % 10);
        }else{
            printf("%d", num2 % 10);
        }
        
        num1 = num1 / 10;
        num2 = num2 / 10;
    }

    return 0;
}
