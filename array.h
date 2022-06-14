#ifndef _ARRAY_H
#define _ARRAY_H
 


class Array{
 /// medlemsvariablar är privata
private:
    int* A;
    int size;
    int length;
 
public:
    Array(int size);
    Array(){
     size = 0;
     length = 0;
     A = new int[size];
    }
    ~Array();  // destroys allocated memory , destrocture 
    void create();  // Asks users 
    void display();  // prints elements in array
    void append( int x); // appends to last elements
    void insert( int index, int value); // Insert any pos
    int Delete(int index); // For detletion of given index in array
    bool linSearch(int key);  // Searches
    bool Bsearch(int key); // Binary search
    bool BSrecursive(int arr[],int l, int h, int key); // Recursive Binary search
    int get( int index); // Getter of value
    void set(int index, int value);  // Setters
    int Max(); // Max value in array
    int Min(); // Min value in array
    int Sum(); // getting the sum of elements
    double Average(); // getting average value from array
    void Reverse(); // Reversing the list in array
    void Reverse2(); // Reversing the list in array
   void swap(int *x, int *y); // Swap 
   void insertSort(int value);  // For inserting in sorted array
   bool isSorted(); // Checks if the array is sorted
   void Rearrange(); // changing pos negative and positive numbers 
   Array*  mereg(Array *arr, Array *arr2); // Merging two sorted array in third array
};



// Modifikation


#endif // array.h