/* 백준 문제 링크 https://www.acmicpc.net/problem/2292
== 문제 ==
	* 몇 개의 방을 지나는지 구하기
	* - 벌집처럼 육각형으로 되어있음
	* - 중앙 1에서부터 1씩 N번째 방까지 최소 개수의 방을 지나간다.
	*
== 입력 ==
	* N (1 <= N <= 1,000,000,000)
	*
== 출력 ==
	* 주어진 방까지 최소 개수의 방을 지나서 몇개의 방을 지나는지 출력
*/
#include <stdio.h>

int main() {
	int goal_room = 0; // 도착할 방 번호
	int room_num = 1; // 방 번호
	int layer = 1;

	// 도착하는 방 번호 입력
	scanf("%d", &goal_room);

	// 지나가는 방 개수 계산
	/*
	layer  num   count
	  1     1      1    
	  2     7      6   +6
	  3     19     12  +6
 	  4     37     18  +6
	  5     61     24  +6
	*/
 
	for (int num = 0; num < 1000000000; num += 6) {
		room_num += num;

		if (goal_room <= room_num) {
			break;
		}
		else {
			layer += 1;
		}
	}

	// 지나간 방 개수 출력
	printf("%d", layer);

	return 0;
}
