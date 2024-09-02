
    // V. Pointer to Pointer
    // Pointers to pointers are used when dealing with dynamic arrays of dynamic arrays (arrays 2D ).

    // 1. Declaration 
    // To declare a pointer to a pointer, you use two asterisks (**)
    int ** ptr;

    // 2. Initialization
    int a = 10;
    int* ptr = &a;    // ptr is a pointer to int
    int** ptr_to_ptr = &ptr;  // ptr_to_ptr is a pointer to a pointer to int

    // 3. Accessing values
    cout << **ptr_to_ptr;

    // Example 1
    #include <iostream>
    using namespace std;
    int main() {
    int a = 10;      // An integer variable
    int* ptr = &a;   // Pointer to an integer
    int** ptr_to_ptr = &ptr;  // Pointer to a pointer to an integer

    // Print addresses
    cout << "Address of a: " << &a << endl;
    cout << "Address stored in ptr: " << ptr << endl;
    cout << "Address stored in ptr_to_ptr: " << ptr_to_ptr << endl;

    // Print values
    cout << "Value of a: " << a << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    cout << "Value pointed to by ptr_to_ptr: " << **ptr_to_ptr << endl;

    return 0;
}
        // Example 2
    int rows = 3, cols = 4;
    int** num = new int*[rows];  // Array of pointers
    for (int i = 0; i < rows; ++i) 
    {
    num[i] = new int[cols];  // Allocate memory for each row
    }

// Initialize and print the num
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
        num[i][j] = i * cols + j;
        cout << num[i][j] << " ";
        }
        cout << endl;
    }

// Deallocate memory
    for (int i = 0; i < rows; ++i) 
    {
        delete[] num[i];
    }
    delete[] num;