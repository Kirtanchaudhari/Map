# Algorithm Solutions in C++

This repository contains C++ implementations of commonly asked algorithmic problems in technical interviews and competitive programming. Each solution is written in an object-oriented manner using the `Solution` class.

## Contents

### 1. Two Sum
**File:** `two_sum.cpp`  
Finds indices of the two numbers in an array that add up to a given target.

- **Approach:** Hashmap for constant-time complement lookup.
- **Time Complexity:** O(n)

---

### 2. First Unique Character in a String
**File:** `first_unique_char_string.cpp`  
Returns the index of the first non-repeating character in a string.

- **Approach:** Hashmap to count characters and a queue to track order.
- **Time Complexity:** O(n)

---

### 3. Top K Frequent Elements
**File:** `top-k_frequent_elements.cpp`  
Returns the `k` most frequent elements from an array.

- **Approach:** Hashmap to count frequencies and a max heap for top-k extraction.
- **Time Complexity:** O(n log k)

---

### 4. Longest Consecutive Sequence
**File:** `longest_consucetive_sequence.cpp`  
Finds the length of the longest sequence of consecutive integers.

- **Approach:** Hash set for O(1) lookup, linear traversal.
- **Time Complexity:** O(n)

---

### 5. Valid Sudoku
**File:** `valid_sudoku.cpp`  
Checks whether a given Sudoku board is valid.

- **Approach:** Check row, column, and 3x3 subgrid for duplicates.
- **Time Complexity:** O(1) (fixed 9x9 grid)

---

## How to Run

Make sure you have a C++ compiler (like `g++`) installed. To compile and run any file:

```bash
g++ -o solution <filename>.cpp
./solution
