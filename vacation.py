n=int(input())
ar=[]
for i in range (n):
	temp=list(map(int,input().split()))
	ar.append(temp)
for i in range (1,n):
	ar[i][0]=ar[i][0]+max(ar[i-1][1],ar[i-1][2])
	ar[i][1]=ar[i][1]+max(ar[i-1][0],ar[i-1][2])
	ar[i][2]=ar[i][2]+max(ar[i-1][0],ar[i-1][1])
print(max(ar[-1]))
	
