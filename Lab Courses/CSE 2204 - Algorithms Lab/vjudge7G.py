n=int(input())
k=int(input())
i=0
while i<k:
    if n % 10 != 0:
        n -= 1
    else:
        n //= 10
    i+=1
print(n)
