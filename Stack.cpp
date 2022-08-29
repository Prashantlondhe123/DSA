# Stack:
Stack in C++ STL
Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only.  Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.

The functions associated with stack are: 
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the top most element of the stack – Time Complexity : O(1) 

#include <bits/stdc++.h>

using namespace std;

int main() {

    stack<int> stack;

    stack.push(21);

    stack.push(22);

    stack.push(24);

    stack.push(25);

    stack.pop();

    stack.pop();
  Cout<< Stack size ();

    while (!stack.empty()) {

        cout << stack.top() <<" ";

        stack.pop();

    }
}



Output
22 21



# Swap:
// CPP program to illustrate
// Implementation of swap() function
#include <stack>
#include <iostream>
using namespace std;
 
int main()
{
        // stack container declaration
    stack<int> mystack1;
    stack<int> mystack2;
     
    // pushing elements into first stack
    mystack1.push(1);
    mystack1.push(2);
    mystack1.push(3);
    mystack1.push(4);
     
    // pushing elements into 2nd stack
    mystack2.push(3);
    mystack2.push(5);
    mystack2.push(7);
    mystack2.push(9);
 
        // using swap() function to swap elements of stacks
    mystack1.swap(mystack2);
 
        // printing the first stack
    cout<<"mystack1 = ";
    while (!mystack1.empty()) {
        cout<<mystack1.top()<<" ";
        mystack1.pop();
    }
 
        // printing the second stack
    cout<<endl<<"mystack2 = ";
    while (!mystack2.empty()) {
        cout<<mystack2.top()<<" ";
        mystack2.pop();
    }
    return 0;
}


Output:

mystack1 = 9 7 5 3
mystack2 = 4 3 2 1



# Emplace function:






// CPP program to illustrate
// Implementation of emplace() function
#include <iostream>
#include <stack>
using namespace std;
 
int main() {
  stack<int> mystack;
  mystack.emplace(1);
  mystack.emplace(2);
  mystack.emplace(3);
  mystack.emplace(4);
  mystack.emplace(5);
  mystack.emplace(6);
  // stack becomes 1, 2, 3, 4, 5, 6
 
  // printing the stack
  cout << "mystack = ";
  while (!mystack.empty()) {
    cout << mystack.top() << " ";
    mystack.pop();
  }
  return 0;
}



#
