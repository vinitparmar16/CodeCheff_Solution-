# cook your dish here
import math
t=int(input())
cou=0
for i in range(t):
    arr_size=int(input())
    array=list(map(int, input().strip().split()))
    if (gcd_arr(array,arr_size) ==LCMofArray(array)):
        cou+=1
    else:
        continue
print(cou)
    
        

def gcd(a, b):
   while b:
       a, b = b, a % b
def gcd_arr(arr, n):
   res = arr[0]
   for i in range(1, n):
       res_gcd = gcd(res, arr[i])
   return res_gcd
def LCMofArray(a):
  lcm = a[0]
  for i in range(1,len(a)):
    lcm = lcm*a[i]//math.gcd(lcm, a[i])
  return lcm