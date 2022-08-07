#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Jul 31 10:57:15 2022

@author: raiqarasool
"""

def alternate_swap(arr):
    temp=0
    for i in range(0,len(arr),2):
        arr[i],arr[i+1]=arr[i+1],arr[i]


arr=[1,2,3,4,5,6]

alternate_swap(arr)
print(arr)        
        