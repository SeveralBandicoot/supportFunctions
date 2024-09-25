/*
Support Functions

@ AJ Enrique Arguello

Objectives: List 4 support Functions/commands that are made for STL Stacks  

  Create an example and illustrate your choices 
*/

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void display();
void pushExample();
void popExample();
void topExample();
void sizeExample();

int main() {
  stack<int> elements;

  int userChoice;
  
  cout << "The support functions we will demonstrate for this program are below, select which you would like to see a demonstration of: " << endl;
  display();

  cin >> userChoice;

  (userChoice == 1) ? void(pushExample()) :
    (userChoice == 2) ? void(popExample()) :
      (userChoice == 3) ? void(topExample()) :
        (userChoice == 4) ? void(sizeExample()) : 
          void(cout << " ");

}


void display() {
  cout << "1.) push()\n2.) pop()\n3.) top()\n4.) size()" << endl;
}

void pushExample() {
  stack<int> numbers;
  vector<int> numbersVec;

  while (!numbers.empty()) {
    numbersVec.push_back(numbers.top()); // pushes back the elements from stack into vector
    numbers.pop(); // pops names from stack to vector
  }

  cout << "Before push command: ";
  for (const int& number : numbersVec) {
    cout << " " << number;
  }
  cout << endl;
  cout << "After pushing element 1 to stack: ";
  numbers.push(1);

  while (!numbers.empty()) {
      numbersVec.push_back(numbers.top()); // pushes back the elements from stack into vector
      numbers.pop(); // pops names from stack to vector
  }

  for (const int& number : numbersVec) {
    cout << " " << number;
  }

}

void popExample() {

}

void topExample() {

}

void sizeExample() {

}