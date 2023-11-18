Repetition 
    loops :
        while
        for
        do while
exceptions in cpp
to Exceptions provide a way to transfer control from one part of a program to another.

in cpp exception handling is made using three keywords:
    TRY:the try block is where our exception is expected to happen , its always followed by one or mpre catch  blocks
    THROW: a program throw an exception when a problem happens using THROW keyword;
    CATCH: its simply the catching  of an exception ,its  a block of code that is executed when a particular exception is thrown.


***The try and catch keywords come in pairs

ADVANTAGES:
- Separation of Error Handling code from Normal Code.
- Grouping of Error Types.



C++ Standard Exceptions:
the C++ library has a standard exception class which is the base class for all standard exceptions. All objects thrown by the components of the standard library are derived from this class. Therefore, all standard exceptions can be caught by catching this type


Note : The use of Dynamic Exception Specification has been deprecated since C++11. One of the reasons for it may be that it can randomly abort your program. This can happen when you throw an exception of another type which is not mentioned in the dynamic exception specification. Your program will abort itself because in that scenario, it calls (indirectly) terminate(), which by default calls abort().