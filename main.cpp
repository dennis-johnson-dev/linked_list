// main.cpp
#include "List.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
  List<int> integerList; 

  integerList.insertAtFront(44);
  integerList.insertAtFront(4);
  integerList.insertAtFront(2);
  integerList.print();

  cout << "Now removing: " << endl;

  integerList.removeFromFront();

  integerList.print();
  
}
