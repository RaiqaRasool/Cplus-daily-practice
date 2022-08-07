#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jul 27 09:14:48 2022

@author: raiqarasool
"""

def power(a,b):
    pow=1
    for i in range(b):
        pow=pow*a
    return pow


print(power(2,3))
