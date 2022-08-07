#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Jul 27 07:59:35 2022

@author: raiqarasool
"""


import sys
#python does not have switch
#as alternative we use dictionary mapping
def num_to_str(argument):
    switcher={
        0:"zero",
        1:"one",
        2:"two"
        }
    #built in but not working
    # exit()
    #quit()
    return switcher.get(argument,"nothing")

n=int(input("Enter number: "))
sys.exit("Checking Exit")
print(num_to_str(n))