# cook your dish here
t=int(input())
for i in range(t):
    W,X,Y,Z = map(int,input().split())
    c_am=X-Y
    if (c_am<0):
     print(W-(-c_am*Z))
        
    else:
        print(W+(c_am*Z))
        