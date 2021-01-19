a, b, c = input().split(' ')

a = int(a)
b = int(b)
c = int(c)

if (a >= 2 and b >= 2 and c <= 10000):
    print((a+b) % c)
    print((a % c + b % c) % c)
    print((a*b) % c)
    print((a % c * b % c) % c)
