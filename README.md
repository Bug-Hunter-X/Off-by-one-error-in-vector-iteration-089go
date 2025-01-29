# Off-by-One Error in C++ Vector Iteration

This repository demonstrates a common off-by-one error in C++ when iterating over a `std::vector`.  The error arises from attempting to access an element at an index equal to the vector's size, which is one beyond the valid range of indices.

## Bug Description

The `bug.cpp` file contains a `for` loop that iterates from `0` up to and including `vec.size()`.  This causes an out-of-bounds access because valid indices range from `0` to `vec.size() - 1`.

## Solution

The `bugSolution.cpp` file corrects the error by changing the loop condition to `i < vec.size()`. This ensures that the loop terminates before attempting to access the element beyond the valid range.