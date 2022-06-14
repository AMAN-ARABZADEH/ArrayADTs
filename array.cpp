#include <iostream>
#include "array.h"
using std::cout;
using std::endl;
using std::cin;

// Constructure for size of the elements
Array::Array(int size){
 this->size = size;
 length = 0;
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
void Array::append( int x){
   if(length < size){
        A[length] = x;
        length++;
   }
}
// Insert at any pos in arr
void Array::insert(int index, int value){
    if(index >=0 && index <= length){
       for(size_t i = length; i > index; --i){
         A[i] = A[i-1]; // Shift elements one step forward
       }
       A[index] = value; // Insert value at the desired pos
       length++;  // add to length one each time
    }

}


// For deleting from any index 
int Array::Delete( int index){
    int value{0};
    if(index >= 0 && index < length){
      value = A[index];
      for(int i{index}; i < length-1;++i){
        A[i] = A[i+1];
      }
      length--;
      return value;
    }
    return 0;

} 

bool Array::linSearch(int key){
  for(int i = 0; i < length; i++){
      if(key == A[i]){
       std::swap(A[i], A[0]);
         return true; 
      }
  }
  return false;  
} 

    bool Array::Bsearch( int key){ // Binary search
       int first, last, middle;
       first = 0;
       last = length -1;
       while (first <= last){
        middle = (first+last)/2;
        if(key == A[middle]){
         return  true;
        }else if(key < A[middle]){
         last = middle -1;
        }else{
         first = middle +1;
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
      int Array::get( int index){
          if(index >= 0 && index < length){
           return A[index];
          }
          return -1; // Indicates invalid index
         }

         // Setter
      void Array::set( int index, int value){
                   if(index >= 0 && index < length){
                      A[index] = value;
                   }
             }

      int Array::Max(){
       int max = -32345566;
       for(int i = 0; i < length; i++){
           if(A[i] > max){
            max = A[i];
           }
       }
       return max;
      }

      
      int Array::Min(){
       int min = 323455661;
       for(int i = 0; i <length; i++){
           if(A[i] < min){
            min = A[i];
           }
       }
       return min;
      }

       int Array::Sum(){
           int sum = 0;
           for(int i = 0; i < length; i++){
            sum += A[i];
           }
           return sum;

       }

       double Array::Average(){
        double total= 0;
        for(int i = 0; i < length; i++){
           total+= A[i];
        }
        return total / length;
       }


       // Reversing the array
         void Array::Reverse(){
          int *B = new int[length];
           int i, j; 
          for( i = length-1, j = 0; i>=0; i--, j++){
             B[j] = A[i];
          }
          for(int i = 0; i > length; i++){
             A[i] = B[i];
          }
         }

        void Array::Reverse2(){
           int i,j;
           for(i = 0, j = length-1; i <j; i++, j--){
            std::swap(A[i], A[j]);
           }
        }

        void Array::swap(int *x, int *y){
            int temp = *x;
            *x = *y;
            *y = temp;
        }
        // Inserting in sorted array
           void Array::insertSort(int value){
            if(length == size){
             return;
            }
            int pos = length -1;
            while(A[pos] > value && pos >=0){
              A[pos+1] = A[pos];
              pos--;
            }
            A[pos+1] = value;
            length++;
           }

           // Check if the array is sorted
             bool Array::isSorted(){
              for(int i = 0; i < length-1; i++){
                if(A[i] > A[i+1]){
                   return false;
                }
              }
              return true;
             } 
  // changes the pos of negative and non negative numbers, 
  // negative to right side and positives in left side
     void Array::Rearrange(){
        int i = 0, j = length-1;
        while (i <j){
           while(A[i] <0) i++;
           while(A[i] >= 0)j--;
           if(i <j){
            std::swap(A[i], A[j]);
           }
        }
     
   }


     