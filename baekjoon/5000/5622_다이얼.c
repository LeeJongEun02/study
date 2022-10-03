/*
백준 문제 링크 https://www.acmicpc.net/problem/5622
-- 입력 --
  알파벳 대문자로 이루어진 단어. 2이상 15이하
-- 출력 --
  다이얼을 걸기 위해 필요한 최소 시간
*/
#include <stdio.h>

int main(void) {
    char word[16];
    int dial_num = 0;
    int total_time = 0;

    scanf("%s", word);

    for (int index = 0; word[index] != '\0'; index ++){
        // 다이얼 번호 구하기
        dial_num = (word[index] - 'A') / 3 + 2;
        if (word[index] == 'S'){
            dial_num = 7;
        }else if (word[index] == 'V'){
            dial_num = 8;
        }else if (dial_num == 10){
            dial_num = 9;
        }

        total_time += (2 + dial_num - 1);
    }

    printf("%d", total_time);
    
    return 0;
}
