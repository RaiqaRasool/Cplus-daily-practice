#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jul 27 08:22:43 2022

@author: raiqarasool
"""

import sys
def add(a,b):
    return a+b

def sub(a,b):
    return a-b

def mult(a,b):
    return a*b

def div(a,b):
    return a/b


while(True):
    print("1. For Add")
    print("2. For Sub")
    print("3. For Multiply")
    print("4. For Divide")
    print("5. To Exit")
    choice=int(input("Enter operation: "))
    
    if(choice==1):
        print(add(1,2))
    elif choice==2:
        print(sub(1,2))
    elif choice==3:
        print(mult(1,2))
    elif choice==4:
        print(div(1,2))
    elif choice==5:
        print("Exiting...")
        sys.exit()
    else:
        print("no such op available")