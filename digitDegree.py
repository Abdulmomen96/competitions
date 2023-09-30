def solution(n):
    if n < 10:
        return 0
    else:
        sum_digit = sum([int(i) for i in str(n)])
    return solution(sum_digit) + 1
        
