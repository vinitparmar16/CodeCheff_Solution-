# cook your dish here
t=int(input())
for i  in range(t):
    A,B,X=map(int,input().split())
    ass=B-A
    print(ass//X)