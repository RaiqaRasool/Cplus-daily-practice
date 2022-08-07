#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jul 27 09:19:17 2022

@author: raiqarasool
"""

def even_or_odd(n):
    return n%2


n=int(input("Enter number: "))
print("Odd" if even_or_odd(n) else "Even")