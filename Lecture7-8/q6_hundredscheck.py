#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jul 27 08:30:34 2022

@author: raiqarasool
"""
#find number of 100's,50's,10's and 1's in number
n=int(input("Enter number:"))
nhund=0
nfift=0
ntwent=0
none=0
while(n!=0):
    if n>100:
        nhund=n//100
        n=n%100
    if(n>50):
        nfift=n//50
        n=n%50
    elif(n>20):
        ntwent=n//20
        n=n%20
    elif(n>1):
        none=n//1
        n=0
        break
    
    
print(f"nhund:{nhund}\nnfift:{nfift}\nntwent:{ntwent}\nnone:{none}")

