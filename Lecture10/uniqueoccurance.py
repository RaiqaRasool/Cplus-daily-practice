import sys
# solution is good but not every optimized -- faster than 11%,94% memory efficient submissions
# def uniqueOccurance(arr,n):
#    store_freq={}
#    for i in arr:
#     if i in store_freq:
#         store_freq[i]+=1
#     else:
#         store_freq[i]=1

#     check_freq={}
#     list_freq=list(store_freq.values())
#     for i in list_freq:
#         if i in check_freq:
#             return False

#         check_freq[i]=i

# #     return True

# #optimized solution -- faster than 28%, 33% memory efficient submissions
# def uniqueOccurance(arr,n):
#     store_freq={}
#     for i in arr:
#         if i in store_freq:
#             store_freq[i]+=1
#         else:
#             store_freq[i]=1
#     freq_list=list(store_freq.values())
#     freq_set=set(store_freq.values())

#     if(len(freq_list)==len(freq_set)):
#         return True
#     else:
#         return False

# more optimized solution -- faster than 43%, 33% memory efficient online submissions
# here same program above work faster by using .get bcz when it comes to checking key existence
# and then extracting its value too then it is faster than using in but if you want to just check if particular key
# exists or not then in is faster
def uniqueOccurance(arr,n):
    store_freq={}
    for i in arr:
        store_freq[i]=store_freq.get(i,0)+1
    freq_list=list(store_freq.values())
    freq_set=set(store_freq.values())

    if(len(freq_list)==len(freq_set)):
        return True
    else:
        return False


def takeInput():
    n=int(sys.stdin.readline().rstrip())

    if n==0:
        return list(),0
    
    arr=list(map(int,sys.stdin.readline().rstrip().split(" ")))
    return arr,n


t=int(sys.stdin.readline().rstrip())

while(t>0):
    arr,n=takeInput()
    print(uniqueOccurance(arr,n))
    t-=1

