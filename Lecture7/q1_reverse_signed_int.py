# reverse signed int with 0 return for <-2^31 an >2^31-1

n = int(input("Enter number: "))


def reverse_int(n):
    reverse = 0
    check = 0
    INT_MIN = -2**31
    INT_MAX = (2**31)-1
    if(n < 0):
        n = -1*n
        check = 1

    while(n != 0):
        if (check == 1 and -(reverse*10) < INT_MIN) or reverse*10>INT_MAX:
            return 0
        else:
            reverse = ((reverse*(10))+(n % 10))
            n = n//10
    else:
        if check == 1:
            reverse = -reverse
        return reverse


print(reverse_int(n))
