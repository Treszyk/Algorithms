def euclidean_GCD_iterative(a, b):
    while b:
        a, b = b, a%b
    return a

def euclidean_GCD_recursive(a, b):
    if b == 0:
        return a
    return euclidean_GCD_recursive(b, a%b)

a = 8460592
b = 324

print(euclidean_GCD_iterative(a, b))
print(euclidean_GCD_recursive(a, b))