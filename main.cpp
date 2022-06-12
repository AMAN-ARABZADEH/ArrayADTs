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
    int index, value, app,del,key;
    char selection;
    cout << std::boolalpha << endl;
    do{
     cout << "Enter C to create array:             " << endl;
     cout << "Enter D for display()                " << endl;
     cout << "Enter I for insert att any position: " << endl;
     cout << "Enter R to delete at given index:    " << endl; 
     cout << "Enter S to search:                   " << endl;
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
        cout << "Enter the value: ";
        cin >> del;
        arr.append(&arr, del);
      break;
     case 'R':
     case 'r':
        cout << "Enter the index: ";
        cin >> app;
        cout << "The deleted element is: " << arr.Delete(&arr, app) << endl;
        arr.display();
      break;
     case 'S':
     case 's':
        cout << "Enter the key search: ";
        cin >> key;
        cout << "The deleted element is: " << arr.Bsearch(&arr, key) << endl;
      break;
      case 'e':
      case 'E':
        cout << "Goodbye" << endl << "Have a good day!" << endl;
      break;
     default:
        cout << "Wrong choice try again:"  << endl;
        cin >> selection;
     }
    } while (selection != 'E' &&  selection != 'e');
    

    return 0;
}