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
        cout << "]" 
        << endl;// new line 
    }
 
     // Appends to the last element in the list
     void Array::append(Array *arr, int x){
       if(arr->length < arr->size){
          arr->A[arr->length] = x;
          arr->length++;
       }
    }
    // Insert at any pos in arr
        void Array::insert(Array  *arr, int index, int value){
               if(index >=0 && index <= arr->length){
                   for(size_t i = length; i > index; --i){
                      arr->A[i] = arr->A[i-1]; // Shift elements one step forward
                   }
                   arr->A[index] = value; // Insert value at the desired pos
                   arr->length++;  // add to length one each time
               }

        }