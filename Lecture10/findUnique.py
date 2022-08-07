import sys
#Brute force not good solution -- Time complexity O(n^2)
# def findUnique(arr,n):
#     for i in range(n):
#         count=0
#         for j in range(n):
#             if arr[i]==arr[j]:
#                 count+=1
#         if count==1:
#             return arr[i]

#optimized solution -- Time complexity O(n)
def findUnique(arr,n):
    unique=0
    for i in range(n):
        unique^=arr[i]

    return unique

def takeInput():
    n=int(sys.stdin.readline().rstrip())

    if n==0:
        return list(),0
    
    arr=list(map(int,sys.stdin.readline().rstrip().split(" ")))
    return arr,n



t=int(sys.stdin.readline().rstrip())

while t>0:
    arr,n=takeInput()
    print(findUnique(arr,n))
    t-=1
