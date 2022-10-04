## C - malloc, free
#Dynamic memory allocation
So far we have used variables, arrays with fixed size. But what happens if you do
not know the size of the array you have to declare and / or if this size depends on
another variable?So far we have used variables, arrays with fixed size. But what happens if you do
not know the size of the array you have to declare and / or if this size depends on
another variable?
#malloc
The malloc() function allocates size bytes and returns a pointer to the allocated
memory

The memory is not initializedThe memory is not initialized
#free
When the allocated memory is not needed anymore, you must return it to the
operating system by calling the function free.
void free(void *ptr);

