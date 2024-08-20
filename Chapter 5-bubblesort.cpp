#include <iostream>
using namespace std;

// print array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// perform bubble sort
void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // If the element found is greater than the next element, swap them
            if (array[j] > array[j + 1]) {
                // Swap array[j] and array[j+1]
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                // Print the array after each swap
                printArray(array, size);
            }
        }
    }
}


int main() {
    int data[] = { -2, 45, 0, 11, -9 };

    // find array's length
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted Array in Ascending Order:\n";
    printArray(data, size);

    cout << "Sorting step by step:\n";
    bubbleSort(data, size);

    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);

    return 0;
}
