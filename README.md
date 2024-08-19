# Purpose

I was just coding in C and realized that it didn't have the Replace() method like C#. So I decided to create one for fun :)
**!The code may not be optimized!**

# Compiling

If you made changes on *replace.h* and *replace.c*, just use this command:
```gcc -c replace.c```

This will compile *replace.c* into an object file named *replace.o*.

# Building and running

To build the *test* program, just use this command:

```gcc -o test replace.o test.c```

This will link the *replace.o* object file with the *test.c* source file, and create an executable named test.
Note that you need to have the *replace.h* header file in the same directory as the source files, and you need to have the `gcc` compiler installed on your system.

Once you have built the *replace.o* file and the *test* executable, you can run the program with:

```./test```
