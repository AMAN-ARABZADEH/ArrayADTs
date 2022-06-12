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


// For deleting from any index 
int Array::Delete(Array *arr, int index){
    int value{0};
    if(index >= 0 && index < arr->length){
      value = arr->A[index];
      for(int i{index}; i <arr->length-1;++i){
        arr->A[i] = arr->A[i+1];
      }
      arr->length--;
      return value;
    }
    return 0;

} 

bool Array::linSearch(Array *arr, int key){
  for(int i = 0; i <arr->length; i++){
      if(key == arr->A[i]){
       std::swap(arr->A[i], arr->A[0]);
         return true;
      }
  }
  return false;

} 
    bool Array::Bsearch(Array *arr, int key){ // Binary search
       int l, h, middle;
       l = 0;
       h = arr->length -1;
       while (l <= h){
        middle = (l+h)/2;
        if(key == arr->A[middle]){
         return true;
        }else if(key < arr->A[middle]){
         h = middle -1;
        }else{
         l = middle +1;
        }
       }
       return false;
     }