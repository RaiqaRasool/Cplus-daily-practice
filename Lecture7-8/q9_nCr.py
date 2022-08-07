#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jul 27 09:21:56 2022

@author: raiqarasool
"""

def fac(n):
    prod=1
    if n==0 or n==1:
        return 1
    else:
        while(n!=0):
            prod= prod * n
            n=n-1
            return prod
    
def nCr(n,r):
    ans=fac(n)/(fac(r)*fac(n-r))
    return int(ans)


n,r=list(map(int,input("Enter n,r: ").split()))
if(n<r or n<0 or r<0):
    print("Enter n>r and both should be positive")
else:
    print(nCr(n,r))
            