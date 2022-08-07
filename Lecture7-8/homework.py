#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jul 29 07:59:08 2022

@author: raiqarasool
"""

def arithmentic_progression(n):
    return ((3*n)+7)

def find_set_bits(a,b):
    count=0
    while(a!=0):
        if a&1:
            count+=1
        a=a>>1
    while(b!=0):
        if b&1:
            count+=1
        b=b>>1
    return count
    

def fib_series(n):

    if n==0 or 1:
        return n
    else:
        fib1=0
        fib2=1
        temp
        
        for i in range(2,n):
            temp=fib2
            fib2=fib1+fib2 
            fib1=temp
        return fib2
        
    
print(arithmentic_progression(3))
print(find_set_bits(2, 3))
print(fib_series(5))