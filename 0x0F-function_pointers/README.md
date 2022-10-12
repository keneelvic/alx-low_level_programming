## C - Function pointers
Function Pointers in C and C++ By Alex Allain. A function pointer is a variable that stores the address of a function that can later be called through that function pointer. This is useful because functions encapsulate behavior.
##Functions as Arguments to Other Functions
If you were to write a sort routine, you might want to allow the function's caller to choose the order in which the data is sorted; some programmers might need to sort the data in ascending order, others might prefer descending order while still others may want something similar to but not quite like one of those choices. One way to let your user specify what to do is to provide a flag as an argument to the function, but this is inflexible; the sort function allows only a fixed set of comparison types (e.g., ascending and descending).

A much nicer way of allowing the user to choose how to sort the data is simply to let the user pass in a function to the sort function. This function might take two pieces of data and perform a comparison on them. We'll look at the syntax for this in a bit.
##Callback Functions
Another use for function pointers is setting up "listener" or "callback" functions that are invoked when a particular event happens. The function is called, and this notifies your code that something of interest has taken place.

Why would you ever write code with callback functions? You often see it when writing code using someone's library. One example is when you're writing code for a graphical user interface (GUI). Most of the time, the user will interact with a loop that allows the mouse pointer to move and that redraws the interface. Sometimes, however, the user will click on a button or enter text into a field. These operations are "events" that may require a response that your program needs to handle. How can your code know what's happening? Using Callback functions! The user's click should cause the interface to call a function that you wrote to handle the event.
##Function Pointer Syntax

1
void (*foo)(int);
