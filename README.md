# MyMemoryAllocator
This is a simple memory allocator written in C++.
Mainly overload the new and delete function in Complex class.
The Complex.cpp uses the original *new* and *delete* method with around 183ms to execute.
The ComplexMod.cpp usese the overloaded *new* and *delete* method with only around 86ms to execute.
