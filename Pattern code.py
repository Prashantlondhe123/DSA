##DSA:
   A data structure is a particular way of organizing data in a computer so that it can be used effectively

#Array Data Structure:
  An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array


#Problem Statement:- Program to print the right triangle star pattern.
Sample Input/Output:-
*
**
***
****


#Write a Program to print an inverted right triangle star pattern.
*****
****
***
**
*
Solution>

row_size = int(input())
for i in range(row_size,0,-1):
    Print('*'*i)

#Program to print mirrored right triangle star pattern
    *
   **
  ***
 ****
*****

Solution>
print("Enter the row size:")
row_size=int(input())
for out in range(row_size+1):
    for j in range(row_size-out):
        print(" ",end="")
    for p in range(out+1):
        print("*",end="")
    print("\r")

#
