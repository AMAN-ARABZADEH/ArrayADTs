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
void Array::display(Array *arr){ 
   cout << "Printing the elements in Array:\n[ ";
   for (int i = 0; i < arr->length; i++){
       cout << arr->A[i] << " ";
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
         return  true;
        }else if(key < arr->A[middle]){
         h = middle -1;
        }else{
         l = middle +1;
        }
       }
       return false;
     }

     bool Array::BSrecursive(int arr[], int l, int h, int key){
        int middle;
        if(l <= h){
         if(key == arr[middle]){
           middle = (l+h) /2;
           return true;
         }else if(key < arr[middle]){
           return BSrecursive(arr, l, middle-1, key);
         }else{
            return BSrecursive(arr, middle+1, h, key);
         }
      }
      return false;
     }

     // Getters 
      int Array::get(Array arr, int index){
          if(index >= 0 && index < arr.length){
           return arr.A[index];
          }
          return -1; // Indicates invalid index
         }

         // Setter
      void Array::set(Array *arr, int index, int value){
                   if(index >= 0 && index < arr->length){
                    arr->A[index] = value;
                   }
             }

      int Array::Max(Array arr){
       int max = -32345566;
       for(int i = 0; i < arr.length; i++){
           if(arr.A[i] > max){
            max = arr.A[i];
           }
       }
       return max;
      }

      
      int Array::Min(Array arr){
       int min = 323455661;
       for(int i = 0; i < arr.length; i++){
           if(arr.A[i] < min){
            min = arr.A[i];
           }
       }
       return min;
      }

       int Array::Sum(Array arr){
           int sum = 0;
           for(int i = 0; i < arr.length; i++){
            sum += arr.A[i];
           }
           return sum;

       }

       double Array::Average(Array arr){
        double total= 0;
        for(int i = 0; i < arr.length; i++){
           total+= arr.A[i];
        }
        return total / arr.length;
       }


       // Reversing the array
         void Array::Reverse(Array *arr){
          int *B = new int[arr->length];
           int i, j; 
          for( i = arr->length-1, j = 0; i>=0; i--, j++){
             B[j] = arr->A[i];
          }
          for(int i = 0; i > arr->length; i++){
             arr->A[i] = B[i];
          }
         }

        void Array::Reverse2(Array *arr){
           int i,j;
           for(i = 0, j = arr->length-1; i <j; i++, j--){
            swap(&arr->A[i], &arr->A[j]);
           }
        }

        void Array::swap(int *x, int *y){
            int temp = *x;
            *x = *y;
            *y = temp;
        }
        // Inserting in sorted array
           void Array::insertSort(Array *arr, int value){
            if(arr->length == arr->size){
             return;
            }
            int pos = arr->length -1;
            while(arr->A[pos] > value && pos >=0){
              arr->A[pos+1] = arr->A[pos];
              pos--;
            }
            arr->A[pos+1] = value;
            arr->length++;
           }

           // Check if the array is sorted
             bool Array::isSorted(Array *arr){
              for(int i = 0; i < arr->length-1; i++){
                if(arr->A[i] > arr->A[i+1]){
                   return false;
                }
              }
              return true;
             }
  // changes the pos of negative and non negative numbers, 
  // negative to right side and positives in left side
     void Array::Rearrange(Array *arr){
        int i = 0, j = arr->length-1;
        while (i <j){
           while(arr->A[i] <0) i++;
           while(arr->A[i] >= 0)j--;
           if(i <j){
            swap(&arr->A[i], &arr->A[j]);
           }
        }
     
   }