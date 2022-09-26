'''
백준 문제 링크 https://www.acmicpc.net/problem/4344
  
-- 입력 --
    첫째 줄에는 테스트 케이스의 개수
    둘째 줄부터는 첫번째는 학생의 수, 그 뒤부터는 학생들의 점수
        3 20 50 80
-- 출력 --
    각 케티스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지
'''
'''
    int testcase_count : 테스트 케이스 개수
    list testcases : 테스트 케이스들
'''
testcase_count = int(input())
testcases = []

# 입력
for line in range(testcase_count):
    testcases.append(input())

# 계산
for testcase in testcases:
    '''
        int student_count : 학생 수
        int student_scores : 학생 점수
    '''
    student_count = int(testcase.split()[0])
    student_scores = list(map(int, testcase.split()[1:]))

    # 평균 계산
    average = sum(student_scores) / student_count    
    
    # 평균 점수를 넘는 학생의 수
    count_student_average = 0
    for score in student_scores:
        if score > average:
            count_student_average += 1

    # 평균 점수를 넘는 학생의 비율
    rate_student = count_student_average / student_count * 100
    print('{0:.3f}%'.format(rate_student))
