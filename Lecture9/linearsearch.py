#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jul 30 09:55:22 2022

@author: raiqarasool
"""

arr=[5,7,-2,10,22,-2,0,5,22,1]

def findnum(n):

    for  i in range(len(arr)):
        if arr[i]==n:
            return True
    return False


n=int(input("Enter number: "))
print("Present"  if findnum(n) else "Not Present")