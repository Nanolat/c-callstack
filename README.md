c-callstack
===========

An implementation to show Java-like call stack in C/C++ code. 

Problem
=======

Usually C programmers use int type for the return value of a function, returning a non-zero value indicating that an error has happened in it. However, with tens of nested function calls, it is takes time to know where the error happened at the beginning.

```
int foo(...)
{
    if (error happened)
        return -1;
    
    ... do something ...

    return 0
}
```

Solution
========

Include c-callstack.h.
Use NL_RETURN(x) instead of return x in your source code.

```
#include "c-callstack.h"

int foo(...)
{
    if (error happened)
        NL_RETURN(-1);
    
    ... do something ...

    NL_RETURN(0);
}
```

Example Call Stack
==================
Make it, and run ./sample. You will see pretty call stack in your C/C++ program.

```
kangmo@ubuntu:~/c-callstack$ make
gcc -g -O0 sample.c -o sample

kangmo@ubuntu:~/c-callstack$ ./sample 
If you love me, you are in trouble, as I am married.
Error(code:-1) at : so_topless_ranking_server (sample.c:23)
Error(code:-1) at : nanolat_database (sample.c:31)
Error(code:-1) at : nanolat_message_queue (sample.c:39)
Error(code:-1) at : main (sample.c:47)

kangmo@ubuntu:~/c-callstack$ 

```

License
=======
The source code is released under Apache v2 license. 
Use it as you wish, but it would be great if you can buy a bottle of beer when you meet me! 
