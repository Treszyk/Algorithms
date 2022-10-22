def sieve_of_eratosthenes(n): #I'll make this return an already marked list up to n
    primes = [True for i in range(n+1)]
    p = 2
    while p*p<=n:
        if primes[p]:
            for j in range(p*p, n+1, p):
                primes[j] = False
        p+=1
    return primes

n = 53
primes = sieve_of_eratosthenes(n)
for i in range(2, n+1):
    if primes[i]:
        print(i)