#include <iostream>
#include "array.h"
using std::cout;
using std::endl;
using std::cin;

   // Constructure for size of the elements
    Array::Array(int size){
        this->size = size;
        A = new int [size];
    }
    
    // This is the destructure
    Array::~Array(){
        delete[] A;
        // cout << "Array destroyed" << endl;
    }
   // For creating array
   // Asks from the user
    void Array::create(){
        cout << "Enter number of elements: ";
        cin >> length;
        cin.ignore();
        cout << "Enter the array elements: " << endl;
        for (int i = 0; i < length; i++){
            cout <<  i  << " Enter elements: ";
            cin >> A[i];
            cin.ignore();
        }
        cout << endl;  // new line 
    }
 
   // For displaying the arrays
    void Array::display(){ 
        cout << "Printing the elements in Array:\n[ ";
        for (int i = 0; i < length; i++){
            cout << A[i] << " ";
        }
        cout << "]" << endl;// new line 
    }
 