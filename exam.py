x,p=list(map(int,input().split()))
ans=0
while x>0 :
    ans=int(ans+x)
    x=x-((x*p)/100)
print(ans)
