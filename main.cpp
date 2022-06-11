#include <iostream>
#include "array.h"
using std::cout;
using std::endl;
using std::cin;
// Hay there! (: 
// This is OOP Programming ARRAY ADT in C++, cplusplus
// In this section W will learn about Array ADT 
// Go head copy the code and follow me.
// Auther Aman Arabzadeh
// Date: 2022-06-10

int main(){
    Array arr(10); 
    int index, value, app;
    char selection;
    do{
     cout << "Enter C to create array: " << endl;
     cout << "Enter D for display()                " << endl;
     cout << "Enter I for insert att any position: " << endl;
     cin >> selection;
     switch (selection){
     case 'C':
     case 'c':
        arr.create();
      break;
     case 'D':
     case 'd':
        arr.display();
      break;
     case 'I':
     case 'i':
        cout << "Enter the index: " << std::flush;
        cin >> index;
        cout << "Enter the value: " << std::flush;
        cin >> value;
        arr.insert(&arr,index, value);
      break;
     case 'A':
     case 'a':
        cout << "Enter the value: " << std::flush;
        cin >> app;
        arr.append(&arr, app);
      break;
     default:
        cout << "Wrong choice try again:"  << endl;
        break;
     }
    } while (selection != 'E' &&  selection != 'e');
    

    return 0;
}