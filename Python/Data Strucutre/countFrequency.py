lst=list(map(int,input().split()))
d={}
for i in lst:
    d[i]=d.get(i,0)+1
print(d)
