/*
백준 문제 링크 https://www.acmicpc.net/problem/1157

-- 입력 --
  1,000,000 이하의 대소문자 단어
-- 출력 --
  가장 많이 사용된 알파벳을 대문자로 출력.
  가장 많이 사용된 알파벳이 여러개일 경우 ? 출력

*/
#include <stdio.h>

int main() {
  char word[1000005];
  int alpha[26];
  int max_index = 0;
  int is_change_max_index = 0;
  int index = 0;

  // 단어 입력받기
  scanf("%s", word);

  while (word[index] != '\0') {
    char word_alpha = toupper(word[index]);
    int alpha_index = ((int)word_alpha - 'A');
    alpha[alpha_index] += 1;

    if (alpha[max_index] < alpha[alpha_index]) {
      max_index = alpha_index;
    }
      
    index += 1;
  }

  // 제일 많은 단어 찾기
  for(int i = 0; i < 26; i++){
      if(alpha[i] >= alpha[max_index] && i != max_index){
          is_change_max_index = 1;
          break;
      }
  }

  if (is_change_max_index == 1) {
    printf("?");
  } else {
    printf("%c", (char)(max_index + 'A'));
  }

  return 0;
}
