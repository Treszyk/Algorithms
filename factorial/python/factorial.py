def fact_iter(n):
    val = 1
    for i in range(1, n+1):
        val*=i
    return val

def fact_recu(n):
    if n<=1:
        return 1
    return n * fact_recu(n-1)

n = 12
print(fact_recu(n))