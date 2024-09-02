// VI. Pointer Arithmetic
// Pointers support arithmetic operations which can be used to navigate through array elements.
/* The basic operations include addition, subtraction, incrementing, and decrementing pointers. 
These operations are essential when dealing with arrays and dynamic memory allocation.*/

// Example
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 40, 30, 40, 50};
    int* ptr = arr;  // Pointer to the first element of the array

    // Print initial value
    cout << "Initial value pointed to by ptr: " << *ptr << endl;

    // Increment the pointer
    ptr++;
    cout << "After incrementing, value pointed to by ptr: " << *ptr << endl;

    // Add 2 to the pointer
    ptr = ptr + 2;
    cout << "After adding 2, value pointed to by ptr: " << *ptr << endl;

    // Decrement the pointer
    ptr--;
    cout << "After decrementing, value pointed to by ptr: " << *ptr << endl;

    // Calculate the difference between pointers
    int* ptr_start = arr;
    int* ptr_end = &arr[4];
    cout << "Number of elements between ptr_start and ptr_end: " << ptr_end - ptr_start << endl;

    return 0;
}
