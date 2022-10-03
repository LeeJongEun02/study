/*
백준 문제 링크 https://www.acmicpc.net/problem/1152
-- 입력 --
  1,000,000 이하의 대소문자 단어
-- 출력 --
  단어의 개수
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char sentence[1000005];
    int count = 0;

    fgets(sentence, sizeof(sentence), stdin);

    for (int index = 0; sentence[index] != '\0'; index++) {  
        // 공백이 아니고, 뒤는 문장의 끝일 경우
        if (!isspace(sentence[index]) &&
            (sentence[index + 1] == '\0' || sentence[index + 1] == '\n')) {
            count += 1;
        }
        // 공백을 만났을 경우 앞뒤 문장이 있을 경우
        else if (sentence[index] == ' '
            && (sentence[index - 1] != 0 && !isspace(sentence[index - 1]))
            && (sentence[index + 1] != 0 && !isspace(sentence[index + 1]))) {
            count += 1;
        }
        // 공백을 만났을 경우 뒤 문장이 끝일 경우
        else if (sentence[index] == ' '
            && (sentence[index - 1] != 0 && !isspace(sentence[index - 1]))
            && (sentence[index + 1] == '\0' || sentence[index + 1] == '\n')) {
            count += 1;
        }
        // 공백일 때, 앞에만 문장일 경우
        else if (sentence[index] == ' '
            && (sentence[index - 1] != 0 && !isspace(sentence[index - 1])) ){
            count += 1;
            }
    }

    printf("%d", count);

    return 0;
}
