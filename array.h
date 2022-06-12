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
    void display();  // prints elements in array
    void append(Array *arr, int x); // appends to last elements
    void insert(Array  *arr, int index, int value); // Insert any pos
    int Delete(Array *arr, int index); // For detletion of given index in array
    bool linSearch(Array *arr, int key);  // Searches
    bool Bsearch(Array *arr,int key); // Binary search
    bool BSrecursive(int arr[],int l, int h, int key); // Recursive Binary search
};





#endif // array.h