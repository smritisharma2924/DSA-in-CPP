// POINTERS & ARRAYS

// Array elements are stored in contiguous memory locations.

// The array name represents the address of its first element.
// arr == &arr[0]

// Pointer arithmetic:
// arr + i == &arr[i]

// Accessing values using pointers:
// *(arr + i) == arr[i]

// arr + 1 moves to the next element, not the next byte.
// The address increases by sizeof(data_type).

// A pointer can point to the first element of an array:
// int *ptr = arr;

// ptr can be modified (ptr++), but the array name cannot (arr++ is invalid).