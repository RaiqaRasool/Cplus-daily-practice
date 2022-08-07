#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jul 30 10:03:22 2022

@author: raiqarasool
"""

arr=[9,5,7,25]


def reversearr(arr):
    start=0
    end=len(arr)-1
    while(start<=end):
        arr[start],arr[end]=arr[end],arr[start]
        start+=1
        end-=1

reversearr(arr)
print(arr)
        