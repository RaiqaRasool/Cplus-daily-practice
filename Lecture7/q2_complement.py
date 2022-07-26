#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jul 26 11:50:56 2022

@author: raiqarasool
"""

#complement of number in dec

# def complement(n):
#     comp=0
#     i=0
#     dec=0
    
#     #keep shifting right unless only zeros are left now take it and find its dec in second loop
#     while (n!=0):
#         digit=(n&1)
#         n=n>>1
#         comp=(digit*(10**i))+comp
#         i+=1
#     print(comp)
        
#     i=0  
#     while (comp!=0):
#         if(comp%10==0):
#             dec+=2**i
#         comp=comp//10
#         i+=1
        
#     return dec

#Other way to do it (better one)
def complement(n):
    mask=0
    m=n
    if n==0:
        return 1
    else:
        while m!=0:
            mask=(mask<<1)|1
            m=m>>1
        else:
            return ((~n)&mask)
n=int(input("Enter number: "))
print(complement(n))
        
        
    