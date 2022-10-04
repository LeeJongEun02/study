/* 백준 문제 링크 https://www.acmicpc.net/problem/10250
== 문제 ==
	* 엘레베이터와 거리가 제일 가까운 방으로 배정
	* - 엘레베이터를 타고 이동하는 거리는 신경쓰지 않는다.
	* - 202호보다는 301호가 더 낫다.
	* - 302호와 202호 중에는 202호가 더 낫다.
	*
== 입력 ==
	* - 첫째 줄 : 테스트 데이터 개수
	* - 둘째 줄~ : H(호텔의 층수) W(각 층의 방 수) N(몇 번째 손님)
	* - 1<=H, W<=99, 1<=N<=HxW
	*
== 출력 ==
	* N번째 손님에게 배정되어야하는 방 번호
*/
#include <stdio.h>
#include <math.h>

int main() {
	int cnt_testcase = 0; // 테스트 데이터 개수
	int cnt_floor = 0; // 호텔 층수
	int cnt_room = 0; // 각 층의 방 수
	int num_guest = 0; // 몇 번째 손님
	int num_room = 0; // 호실
	int num_floor = 0; // 층 수

	// 테스트 데이터 개수 입력
	scanf("%d", &cnt_testcase);

	/*
		층 수 6, 방 수 12, 손님 20번째
		6번째 손님 : 601
		12번째 손님 : 602
		18번째 손님 : 603
		19번째 손님 : 104
		20번째 손님 : 204
		>> 층수를 먼저 변경하고 방의 호실을 변경한다.
		-- 계산식 --
		호실 뒷번호 = (int)ceil(손님 / 호텔 층 수)
		층 번호 = 손님 번호 - ( (손님 / 호텔 층 수) * (호텔 층 수) )
		호실 뒷번호 + (층번호 * 100)
	*/

	for (int i = 0; i < cnt_testcase; i++) {
		// 테스트 케이스별 호텔 층 수, 각 층의 방 수, 몇번째 손님인지 입력받기
		scanf("%d %d %d", &cnt_floor, &cnt_room, &num_guest);

		// 호실과 층 계산
		num_room = (int)ceil((double)num_guest / (double)cnt_floor);
		num_floor = num_guest - ((num_guest / cnt_floor) * cnt_floor);

		// 층이 0일 경우 맨 마지막 층으로 변경
		if (num_floor == 0) {
			num_floor = cnt_floor;
		}

		printf("%d\n", num_room + (num_floor * 100));
		
	}

	return 0;
}
