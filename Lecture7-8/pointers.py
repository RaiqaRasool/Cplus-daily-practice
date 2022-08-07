#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jul 29 08:13:40 2022

@author: raiqarasool
"""

#Everything in python is object containing 
#three pieces of data
##Reference count (address to variable) -- get using id()
##Type - get using type()
##Value
#Resource: https://realpython.com/pointers-in-python/

###-------IMPORTANT CONCEPTS-------

# print(isinstance(1, object))
# print(isinstance(list(),object))
# print(isinstance(True, object))
# def foo():
#     pass
# print(isinstance(foo,object))



# string="Hello"

# print(id(string))

# x=1
# print(id(x))
# x+=1
# print(id(x))
# print(id(x)+1)
# x=16
# print(dir(x))
# print((x.bit_length()))


def inc(n):
    n[0]+=1
 
n=[22]
print(n)
print(inc(n))
print(n)