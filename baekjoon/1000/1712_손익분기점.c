/* 백준 문제 링크 https://www.acmicpc.net/problem/1712
== 문제 ==
	* 손익분기점 구하기
	* - 매년 A만원 고정 비용이 든다.
	* - 노트북 한대당 B만원 가변 비용이 든다.
	* - 손익분기점 : 총수입(노트북판매비용) > 총비용(고정비용+가변비용)
	*
== 입력 ==
	* 고정비용 가변비용 판매비용 (빈 칸을 사이에 두고 순서대로 주어짐)
	* - 고정비용, 가변비용, 판매비용 모두 21억 이하의 자연수
	*
== 출력 ==
	* 손익분기점 (최초로 이익이 발생하는 판매량)
	* - 손익분기점이 존재하지 않을 경우 -1 출력
*/
#include <stdio.h>

int main() {
	int fixed_cost = 0; // 고정비용
	int variable_cost = 0; // 가변비용
	int sales_cost = 0; // 판매 비용
	int break_even_point = 0; // 손익분기점

	// 고정비용, 가변비용, 판매비용 입력받기
	scanf("%d %d %d", &fixed_cost, &variable_cost, &sales_cost);

	// 판매비용이 가변비용보다 같거나 작을 경우
	if (sales_cost <= variable_cost) {
		break_even_point = -1;
	}
	else {
		// 손익분기점 = 고정비용 / (판매비용 - 가변비용) + 1
		break_even_point = fixed_cost / (sales_cost - variable_cost) + 1;
	}

	printf("%d", break_even_point);

	return 0;
}
