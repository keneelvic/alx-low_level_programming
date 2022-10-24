## 0x13. C - More singly linked lists
##What is Linked List in C?
A Linked List is a linear data structure. Every linked list has two parts, the data section and the address section that holds the address of the next element in the list, which is called a node.

The size of the linked list is not fixed, and data items can be added at any locations in the list. The disadvantage is that to get to a node, we must traverse to all the way from the first node to the node that we require. The Linked List is like an array but unlike an array, it is not stored sequentially in the memory.

The most popular types of a linked list are:

Singly link list
Doubly link list
Example of Linked List

Format:[data,address]

Head->[3,1000]->[43,1001]->[21,1002]

In the example, the number 43 is present at location 1000 and the address is present at in the previous node. This is how a linked list is represented.

Basic Linked List Functions
There are multiple functions that can be implemented on the linked list in C. Let’s try to understand them with the help of an example program. First, we create a list, display it, insert at any location, delete a location. The following code will show you how to perform operations on the list.
