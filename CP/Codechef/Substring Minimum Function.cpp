#cook your dish here
def funt(n):
    return (n*(n+1)//2)
    
t = int(input())

for i in range(t):
    n,m = [int(i) for i in input().split()]
    
    zeros = n-m
    key = zeros//(m+1)
    superkey = key +1
    n_superkey = zeros - (key* (m+1))
    n_key = m+1 - n_superkey
    
    sum_key = funt(key)
    sum_superkey = funt(superkey)
    ans = (n_key*sum_key) + (n_superkey*sum_superkey)
    print(ans)
