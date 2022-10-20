def prime_factorization(n):
    tab = []
    i = 2
    while n>1:
        if n%i == 0:
            tab.append(i)
            n//=i
        else:
            i+=1
    return tab
        
number = 72000000000
print(prime_factorization(number))