'''
백준 문제 링크 https://www.acmicpc.net/problem/1065

-- 문제 --
    양의 정수 X의 각 자리가 등차수열을 이루는 수가 한수
    N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수 출력
-- 입력 --
    자연수 N
-- 출력 --
    한수의 개수
'''
N = int(input())

def check_number(num):
    check = False
    str_num = str(num)
    
    calc1 = int(str_num[1]) - int(str_num[0])
    calc2 = int(str_num[2]) - int(str_num[1])

    if calc1 == calc2:
        check = True

    return check

# N이 99 이하일 경우 모두 한수이다.
if N < 100:
    print(N)
else:
    count = 99
    
    for num in range(100, N + 1):
        check = check_number(num)
        if check == True:
            count += 1

    print(count)
