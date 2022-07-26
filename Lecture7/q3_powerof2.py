#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jul 26 12:30:02 2022

@author: raiqarasool
"""

def power_2(n):
    
    while(n>2):
        if(n/2!=n//2):
            return False
        n=n/2
        print(n)
    else:
        return True
  
    
n=int(input("Enter number: "))
    
print(power_2(n))
        
        
        
    
