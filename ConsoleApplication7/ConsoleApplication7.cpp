#include <iostream>
#include "ArrayOperations.hpp"
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int* arr = createArray(size);
    inputArray(arr, size);

    int sum = calculateSum(arr, size);
    cout << "The sum of the array is: " << sum << endl;

    
    delete[] arr;

    return 0;
}
