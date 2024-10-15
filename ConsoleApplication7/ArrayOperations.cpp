#include "ArrayOperations.hpp"
#include <iostream>
using namespace std;

int* createArray(int size) {
    return new int[size];
}

void inputArray(int* arr, int size) {
    int i = 0;
    cout << "Enter " << size << " integers:\n";
    while (i < size) {
        cin >> arr[i];
        i++;
    }
}

int calculateSum(int* arr, int size) {
    int sum = 0;
    int i = 0;
    while (i < size) {
        sum += arr[i];
        i++;
    }
    return sum;
}
