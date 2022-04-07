from collections import*

for i in range(int(input())):
	n=int(input())
	a=list(map(int,input().split()))
	b=list(map(int,input().split()))

	x=float("inf")
	a.sort()
	b.sort()

	m=defaultdict(int)

	for i in range(n-1):
		m1=b[i]-a[i]
		m2=b[i]-a[i+1]

		if m1!=m2:
			if m1>0:
				m[m1]+=1
			if m2>0:
				m[m2]+=1
		else:
			if m1>0:
				m[m1]+=1

	for i in m.keys():
		if m[i]==n-1:
			x=min(x,i)
	print(x)