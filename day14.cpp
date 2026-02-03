// Time and Space Complexity

// Time Complexity -

// Definition : Time complexity is a mathematical way of representing how the runtime of an algorithm increases as the size of the input (denoted as n) grows.
// Not Actual Time : It does not measure time in seconds (as this depends on your processor speed or RAM), but rather the number of operations or steps performed.
// Asymptotic Analysis : We focus on the "big picture" or how the algorithm behaves when n becomes very large, ignoring small constants and lower-order terms.

// Big O Notation (O)

// This is the most common notation used to describe the "Worst Case" scenario.
// O(1) - Constant Time : The execution time is independent of the input size. Example: Accessing an element in an array by index like arr[i].
// O(logn) - Logarithmic Time : The input size is reduced (usually halved) in every step. Example: Binary Search.
// O(n) - Linear Time : The runtime grows directly in proportion to the input size. Example: A single for loop scanning an array once.
// O(nlogn) - Linearithmic Time : This is typical for efficient sorting algorithms like Merge Sort or Quick Sort.
// O(n^2) - Quadratic Time : The runtime is proportional to the square of the input. Example: Nested loops used in Bubble Sort or Selection Sort.
// O(2^n) - Exponential Time : The runtime doubles with each addition to the input. Example: Recursive calculation of Fibonacci numbers without memoization.

// How to calculate it :

// 1. Drop Constants : 3n+5 becomes O(n).
// 2. Keep the Fastest Growing Term : n^2+n+10 becomes O(n^2).
// 3. Loops : A loop running n times is O(n). Nested loops are n*n=O(n^2).
// 4. If-Else: We take the complexity of the "heavier" branch (the worst case).



// Space Complexity -

// Definition : Space Complexity is the total amount of memory space used by an algorithm in relation to the input size n.
// Components : It is the sum of Auxiliary Space (extra space used by the algorithm) and the space used by the Input itself.
// Unit of Measure : Like Time Complexity, we use Big O Notation to describe how memory usage scales.

// Common Space Complexities

// O(1) - Constant Space : The memory usage stays the same regardless of how big the input is.
// O(n) - Linear Space : Memory usage grows directly with the input size.
// O(n^2) - Quadratic Space : Typically seen in 2D arrays or matrices.
