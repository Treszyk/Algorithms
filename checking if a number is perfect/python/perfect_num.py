import math
def is_perfect(n):
    sum = 1
    i = 2
    if n<2:
        return False

    while i*i <= n:
        if n%i == 0:
            #print(i, n//i)
            sum += i + n//i
        if i*i == n:
            sum -= i
        i += 1

    return sum == n

test_num = 137438691328 # it's the 7th perfect number
print(is_perfect(test_num))
