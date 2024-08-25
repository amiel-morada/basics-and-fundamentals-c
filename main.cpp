#include <iostream>
using namespace std;

int main() {

    // Initialize Array 1 and Number of Elements in Array 1
    int array1[10];
    int arrayQuantity1;

    // Prompt and validate the number of elements to be entered for Array 1
    cout << "Enter number of elements (up to 10) to be entered for Array 1: ";
    cin >> arrayQuantity1;
    while (arrayQuantity1 < 0 || arrayQuantity1 > 10) {
        cerr << "Invalid number of elements. Please enter a number between 0 and 10." << endl;
        cout << "Enter number of elements (up to 10) to be entered for Array 1: ";
        cin >> arrayQuantity1;
    }

    // Enter the Elements in Array 1
    cout << "Enter element/s for Array 1: ";
    for (int i = 0; i < arrayQuantity1; i++) {
        cin >> array1[i];
    }

    // Initialize Array 2 and Number of Elements in Array 2
    int array2[10];
    int arrayQuantity2;

    // Prompt and validate the number of elements to be entered for Array 2
    cout << "Enter number of elements (up to 10) to be entered for Array 2: ";
    cin >> arrayQuantity2;
    while (arrayQuantity2 < 0 || arrayQuantity2 > 10) {
        cerr << "Invalid number of elements. Please enter a number between 0 and 10." << endl;
        cout << "Enter number of elements (up to 10) to be entered for Array 2: ";
        cin >> arrayQuantity2;
    }

    // Enter the Elements in Array 2
    cout << "Enter element/s for Array 2: ";
    for (int i = 0; i < arrayQuantity2; i++) {
        cin >> array2[i];
    }

    //Initialize a new Array for the Merged Elements of Arrays 1 and 2
    int mergedArray[20];

    //Copy Elements of Array 1 to Merged Array
    for (int i=0; i<arrayQuantity1; ++i){
        mergedArray[i]=array1[i];
    }

    //Copy Elements of Array 2 to Merged Array
    for (int i=0; i<arrayQuantity2; ++i){
        mergedArray[i+arrayQuantity1]=array2[i];
    }


    //Initialize Total Number of Elements in Merged Array
    int mergedArrayQuantity = arrayQuantity1 + arrayQuantity2;


    // Sort the Merged Array in Descending Order
    for (int i = 0; i < mergedArrayQuantity - 1; ++i) {
        for (int j = 0; j < mergedArrayQuantity - i - 1; ++j) {
            if (mergedArray[j] < mergedArray[j + 1]) {
                int temp = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }


    //Print the Elements of Merged Array
    for (int i=0; i<mergedArrayQuantity; ++i){
        cout<<mergedArray[i]<<" ";
    }



    return 0;
}
