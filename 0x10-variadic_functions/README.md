##VARIADIC FUNCTIONS
A function may be called with a varying number of arguments of varying types. The include file <stdarg.h> declares a type va_list and defines three macros for stepping through a list of arguments whose number and types are not known to the called function.

The called function must declare an object of type va_list which is used by the macros va_start(), va_arg(), and va_end().

##va_start()
The va_start() macro initializes ap 

##va_arg()
returns the value of the arguments

##va_end()
closes up 
