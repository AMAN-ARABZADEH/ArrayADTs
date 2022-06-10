#ifndef _ARRAY_H
#define _ARRAY_H
 


class Array{
 
private:
    int* A;
    int size;
    int length;
 
public:
    Array(int size);
    void create();  // Asks users 
    void display();  // prints elements in array
    ~Array();  // destroys allocated memory , destrocture 
};





#endif // array.h