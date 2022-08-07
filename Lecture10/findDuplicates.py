import sys


    

def takeInput():
    n=int(sys.stdin.readline().rstrip())

    if n==0:
        return list(),0
    
    arr=list(map(int,sys.stdin.readline().rstrip().split(" ")))
    return arr,n



t=int(sys.stdin.readline().rstrip())

while t>0:
    arr,n=takeInput()
    print()
    t-=1
