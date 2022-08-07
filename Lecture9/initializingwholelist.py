#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jul 30 08:53:10 2022

@author: raiqarasool
"""
import numpy.random as random
def maxcheck(arr):
    maxnum=0
    for i in range(len(arr)):
        if arr[i]>maxnum:
            maxnum=arr[i]
    return maxnum
   

arr=random.randn(10)

print(arr)

print(maxcheck(arr))