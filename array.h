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
    ~Array();  // destroys allocated memory , destrocture 
    void create();  // Asks users 
    void display(Array *arr);  // prints elements in array
    void append(Array *arr, int x); // appends to last elements
    void insert(Array  *arr, int index, int value); // Insert any pos
    int Delete(Array *arr, int index); // For detletion of given index in array
    bool linSearch(Array *arr, int key);  // Searches
    bool Bsearch(Array *arr,int key); // Binary search
    bool BSrecursive(int arr[],int l, int h, int key); // Recursive Binary search
    int get(Array arr, int index); // Getter of value
    void set(Array *arr, int index, int value);  // Setters
    int Max(Array arr); // Max value in array
    int Min(Array arr); // Min value in array
    int Sum(Array arr); // getting the sum of elements
    double Average(Array arr); // getting average value from array
    void Reverse(Array *arr); // Reversing the list in array
    void Reverse2(Array *arr); // Reversing the list in array
   void swap(int *x, int *y); // Swap 
   void insertSort(Array *arr, int value);  // For inserting in sorted array
   bool isSorted(Array *arr); // Checks if the array is sorted
   void Rearrange(Array *arr); // changing pos negatibv and positive numbers 
};





#endif // array.h