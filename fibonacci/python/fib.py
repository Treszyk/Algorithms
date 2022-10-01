def fib_iter(n):
    a = 0
    b = 1
    if n == 0:
        print(0)
        return
    for i in range(n):
        print(a, end=" ")#first 9 numbers
        a, b = b, a + b
    print("\n", a, sep='')#a print here would print the F9 number so the 9th number

def fib_recur(n):
    if n<2:
        return n
    return fib_recur(n-2) + fib_recur(n-1)

for i in range(9):
    print(fib_recur(i), end=" ") #prints the first 9 numbers up to the F0-F8

print("\n", fib_recur(9), sep='') #prints the F9 number
    