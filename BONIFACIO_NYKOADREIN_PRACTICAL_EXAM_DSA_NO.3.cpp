#include <iostream>
using namespace std;

int main() {

//original array
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int originalSize = 10; 

// display the array
    cout << "Original array: ";
    for (int i = 0; i < originalSize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

//adding size to the original array
    int newSize = originalSize + 1;
    int* newNumbers = new int[newSize];
    
    
// enter the new item/value
    int newItem;
    cout << "Enter a new item/value to append to the array: ";
    cin >> newItem;


//incrementing the size of the array
    for (int i = 0; i < originalSize; i++) {
        newNumbers[i] = numbers[i];
    }

//making the newItem the value of the added size in the array
    newNumbers[originalSize] = newItem;


//displaying the new array with added value
    cout << "New array with added value/item: ";
    for (int i = 0; i < newSize; i++) {
        cout << newNumbers[i] << " ";
    }
    cout << endl;

 

    return 0;
}