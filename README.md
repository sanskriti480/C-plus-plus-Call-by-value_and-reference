# C++ Experiment 10: Call by value and reference in C++
---

## Aim  
- To understand and implement the concepts of function parameter passing techniques in C++.
- To demonstrate the difference between:

1. Call by Value – passing a copy of actual parameters.

2. Call by Reference (using pointers) – passing memory addresses of variables.

3. Pass by Reference (using reference variables) – creating aliases for actual parameters.

- To analyze how each method affects variable values inside and outside the function.
- To compare the efficiency and usability of these methods in real-world programming scenarios.


---

## Tool Used  
VS Code or Programiz Online C++ Compiler.

---

## Objectives  
- To understand how data is passed to functions in C++ through different parameter passing techniques.
- To study the effect of Call by Value, Call by Reference (using pointers), and Pass by Reference (using reference variables) on the original variables.
- To implement and compare the three swapping techniques in C++.
- To observe how Call by Value does not modify actual parameters, while Call by Reference and Pass by Reference modify them directly.
- To analyze why C++ provides references in addition to pointers for simpler and safer programming.
- To improve understanding of memory management and efficiency in function calls.

  
---

## Theory

### Why C++ is More Efficient than C
- C++ supports Object-Oriented Programming (OOP), which improves code reusability and maintainability.

- Built-in string class makes string manipulation easier than C-style strings.

- Rich Standard Template Library (STL) reduces coding time.

- Better type safety compared to C.

- Function overloading and templates provide flexibility.

- Memory management tools like RAII help prevent leaks.

- Direct support for function overloading and inline functions improves efficiency.

### Call by value-  
---
- In Call by Value, a copy of the actual parameters (arguments) is passed to the function.
- The function works on the copy of the data, not the original variables.
- Any modification made inside the function does not affect the original values in the calling function.
- This approach is simple and safe, but less efficient for large data structures because it requires extra memory for copies.
- Example: Swapping using Call by Value will not work, as changes are made only to the local copies inside the function.

### Call by reference- 
---
-  In Call by Reference using pointers, the memory addresses of variables are passed to the function.
- The function receives the pointer to the original variable, so it can directly access and modify the actual data.
- Any changes inside the function reflect in the original variables because the function works on the same memory location.
- This method is memory efficient since no copy of the variable is created.
- However, pointer usage can be error-prone if not handled carefully (e.g., null or dangling pointers).
- Example: Swapping using Call by Reference with pointers is successful, as it changes the values at the original memory locations.

---

### Pass by reference-  
---
- In Pass by Reference, reference variables (aliases) are used instead of pointers.
- A reference acts as an alternative name for an existing variable.
- The function directly operates on the original variable, without needing pointers or dereferencing.
- Any modifications made inside the function directly affect the original variables.
- Safer and easier to use compared to pointers since it eliminates pointer-related risks.
- More efficient because no memory copies are created.
- Example: Swapping using Pass by Reference works correctly and is considered the most modern and safe approach in C++.

---

### Advantages and disadvantages of call by value-  
---

## Advantages:
- Original data remains safe (no risk of accidental changes).
- Simple to implement and understand.
## Disadvantages:
- Inefficient for large data (requires copying).
- Changes made inside the function are not reflected outside.

---

### Advantages od pointers 
---
- Dynamic Memory Allocation – Helps allocate and free memory at runtime using malloc, calloc, free (in C) or new/delete (in C++).
- Efficient Array & String Handling – Makes it easier to traverse arrays and manipulate strings.
- Function Arguments – Allows functions to modify actual variables (call by reference).
- Data Structures – Essential for implementing linked lists, stacks, queues, trees, and graphs.
- Memory Efficiency – Saves memory in some cases by directly working with memory addresses.
- Hardware Interaction – Useful in system programming (e.g., accessing memory-mapped devices).
- Function Pointers – Allow passing functions as arguments, enabling callbacks and flexibility in code.

---

### Disadvantages od pointers 
---
- Complexity – Pointers make the program logic harder to read and understand.
- Errors & Bugs – Easy to make mistakes like dangling pointers, wild pointers, null dereferencing.
- Security Issues – Improper use can lead to memory leaks, crashes, or vulnerabilities (buffer overflow).
- Hard to Debug – Pointer-related errors are difficult to trace and fix.
- Memory Management Risk – Programmer must manually allocate and deallocate memory; forgetting causes memory leaks.
- Portability Issues – Direct memory manipulation may behave differently on different systems.

---

### Why are pointers better than arrays
---
- Arrays are fixed size, pointers allow dynamic size (runtime allocation).
- Arrays are static & contiguous, pointers allow flexible data structures (linked list, trees).
- Pointers give better memory efficiency and faster traversal/control.

---

### Why are pointers better than strings
---
- Strings in arrays are hard to resize, but pointers allow dynamic strings.
- Pointers make string operations easier (traversal, function calls).
- Pointers use less memory (allocate exact size, no wastage).
- Passing strings via pointers is faster (just passes address).

---

## Algorithms

### Program 1 Increment of pointers
---

- Start
- Declare variables of different data types:

a as int

b as float

c as double

d as bool
- Declare pointers for each variable and store their addresses:

aptr = &a

bptr = &b

cptr = &c

dptr = &d
- For each pointer:
a. Print the address before increment.
b. Increment the pointer by 1 (ptr++).
c. Print the address after increment.
- End.

---

### Program 2 Difference / Addition
---

- Start
- Declare two integer variables x = 100 and y = 50.
- Declare an integer pointer xptr and assign it the address of x.
- Declare another integer pointer yptr and assign it the address of y.
- Dereference both pointers and calculate the sum:

sum = *xptr + *yptr.

- Print the result → "Sum is: sum".
- Dereference both pointers and calculate the difference:
difference = *xptr - *yptr.
- Print the result → "Difference is: difference".
- End 
---

### Program 3 Traversing array using pointer
---

- Start
- Declare an integer array arr[5] = {2, 4, 6, 8, 10}.
- Initialize a pointer ptr to point to the last element of the array (arr + 4).
- Use a for loop that runs from index i = 4 down to 0:
  
  Print the value pointed to by ptr (*ptr).
  
  Decrement the pointer (ptr--) so it moves to the previous element.
- After the loop ends, all elements of the array are printed in reverse order.
- End

---

### Program 4 Printing string using pointers
---

- Start
- Declare a character array str[] = "Hello World".
- Initialize a pointer ptr to point to the first character of the string (ptr = str).
- Begin a while loop that runs until the character pointed to by ptr is the null terminator ('\0').
- 
Print the character at *ptr.

Increment the pointer (ptr++) to move to the next character.
- When *ptr == '\0', exit the loop.
- End

---

## Concepts Used  
---

- Pointer declaration and initialization.
- Dereferencing (* operator).
- Address-of operator (&).
- Pointer arithmetic (increment and decrement).
- Array traversal using pointers.
- Character array traversal.
- Type-dependent pointer incrementation.
- Null pointers and void pointers.
- Memory representation of pointers.

---

## Conclusion
---

- In this experiment, we learned the use of pointers to access and manipulate data using memory addresses. 
- We performed arithmetic operations, array reversal, and string traversal using pointers. 
- This shows that pointers provide efficient memory access, flexibility, and are essential for advanced concepts like dynamic memory allocation.

---
