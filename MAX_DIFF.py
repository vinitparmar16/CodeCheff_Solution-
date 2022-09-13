# cook your dish here
t=int(input())
s=tuple()
for i in range(t):
    N,S=map(int,input().split())
    if (N>S):
        print(S)
    else:
        print(N*2-S)