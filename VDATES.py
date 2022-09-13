# cook your dish here
for I in range(int(input())):
    d,l,r = map(int, input().split())
    if(d<l):
        print("Too Early")
    elif(d>r):
        print("Too Late")
    else:
        print("Take second dose now")
    