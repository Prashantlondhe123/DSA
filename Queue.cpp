#Queue in C++ Standard Template Library (STL):
-Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front. Queues use an encapsulated object of deque or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements

// CPP code to illustrate Queue in  
// Standard Template Library (STL) 
#include <iostream> 
#include <queue> 
using namespace std; 

 // Print the queue 
void showq(queue<int> gq) 
{ 

    queue<int> g = gq; 

    while (!g.empty()) { 

        cout << '\t' << g.front(); 

        g.pop(); 

    } 

    cout << '\n'; 
} 

  
// Driver Code 

int main() 
{ 

    queue<int> gquiz; 

    gquiz.push(10); 

    gquiz.push(20); 

    gquiz.push(30); 

   Vcout << "The queue gquiz is : "; 

    showq(gquiz); 

  

    cout << "\ngquiz.size() : " << gquiz.size(); 

    cout << "\ngquiz.front() : " << gquiz.front(); 

    cout << "\ngquiz.back() : " << gquiz.back(); 

  

    cout << "\ngquiz.pop() : "; 

    gquiz.pop(); 

    showq(gquiz); 

  

    return 0; 


>Output
The queue gquiz is :     10    20    30

gquiz.size() : 3
gquiz.front() : 10
gquiz.back() : 30
gquiz.pop() :     20    30



#The time complexity and definition of the following functions are as follows:

queue::empty()	O(1)
queue::size()	O(1)
queue::emplace()	O(1)
queue::front()	O(1)
queue::back()	O(1)
queue::push(g) 	O(1)
queue::pop() 	O(1)


#Method:
-queue::empty()	:Returns whether the queue is empty. It return true if the queue is empty otherwise returns false
-queue::size()	:Returns the size of the queue
-queue::swap()	:Exchange the contents of two queues but the queues must be of the same data type, although sizes may differ
-queue::emplace() :Insert a new element into the queue container, the new element is added to the end of the queue
-queue::front()	:Returns a reference to the first element of the queue.
-queue::back()	:Returns a reference to the last element of the queue.
-queue::push(g)  :Adds the element ‘g’ at the end of the queue.
-queue::pop() 	:Deletes the first element of the queue





