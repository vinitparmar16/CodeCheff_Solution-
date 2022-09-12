t=int(input())
for i in range(t):
    N,K= map(int,input().split())
    D=0
    G=N
    for j in range(K):
        for l in range(1,N+1):
            if (G%l==0):
                X=D*G
                print(X)