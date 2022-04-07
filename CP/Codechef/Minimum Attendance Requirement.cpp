#cook your dish here
t=int(input())
for x in range(t):
    n=int(input())
    s=input()
    present=s.count("1")
    present+=120-len(s)
    
    total=(present/120)*100
    
    if(total>=75):
        print("YES")
    else:
        print("NO")