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

#### Advantages:
- Original data remains safe (no risk of accidental changes).
- Simple to implement and understand.
#### Disadvantages:
- Inefficient for large data (requires copying).
- Changes made inside the function are not reflected outside.

---

### Advantages and disadvantages of call by reference-  
---

#### Advantages:
- No memory is wasted for copies (efficient).
- Directly modifies the original variable.
#### Disadvantages:
- Pointer misuse can cause errors (null pointers, segmentation faults).
- Syntax is more complex compared to references.

---

### Advantages and disadvantages of pass by reference-  
---

#### Advantages:
- Easy to use and safer than pointers.
- No need for dereferencing operators (* and &).
#### Disadvantages:
- Cannot be null (sometimes less flexible than pointers).
- Overuse of references can make code confusing if not documented properly.

---

### Use cases-  
---

#### Call by Value:
- Best for small data types (int, char, float).
- When you don’t want the function to modify the original data.
#### Call by Reference (Pointers):
- Useful when you need to work with dynamic memory (arrays, linked lists).
- When you need to return multiple values from a function.
#### Pass by Reference (References):
- Preferred in modern C++ for object passing.
- Commonly used in operator overloading, copy constructors, and STL functions.

---

## Algorithms

### Program 1 Call by value
---

- Start
- Declare two integer variables a = 5 and b = 2.
- Call the function swap(a, b).
- Inside the function:
  
1.Copy values of a and b into parameters x and y.

2.Swap x and y using a temporary variable.

3.Function ends (changes do not affect original variables).

- Print values of a and b.
- End

---

### Program 2 Call by reference
---

- Start
- Declare two integer variables x = 500 and y = 200.
- Call the function swap(&x, &y) (addresses are passed).
- Inside the function:
  
1.Access values using pointers *x and *y.

2.Swap their values using a temporary variable.

3.Since addresses are used, changes reflect in original variables.

- Print values of x and y.
- End

---

### Program 3 Pass by reference
---

- Start
- Declare two integer variables a = 45 and b = 35.
- Print initial values of a and b.
- Call the function swap(a, b) (reference variables are used).
- Inside the function:
  
1.References x and y directly refer to original a and b.

2.Swap values using a temporary variable z.

3.Original values of a and b get modified directly.

- Print updated values of a and b.
- End

---

## Concepts Used  
---

- Functions – modular blocks of reusable code.
- Function Parameters –
  
1. Call by Value → copy of value passed.

2. Call by Reference (pointers) → address passed.

3. Pass by Reference (references) → alias passed.

- Pointers – store addresses, allow indirect modification.
- Reference Variables – alternate names for variables.
- Swapping Logic – uses a temporary variable to exchange values.
- Scope – shows effect of local vs referenced variables.
- Input/Output – use of cout to display results.

---

## Conclusion
---

- Call by Value does not affect the original variables since only copies are modified.
- Call by Reference using pointers allows direct modification of variables through their memory addresses.
- Pass by Reference using references provides a cleaner and safer way to achieve the same effect without explicit pointer syntax.
- Overall, C++ offers flexible parameter passing mechanisms, making functions more powerful and adaptable for different programming needs.

---
