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
void pushExample(stack<int> &elements);
void popExample(stack<int> &elements);
void topExample(stack<int> &elements);
void sizeExample(stack<int> &elements);

int main() {
  stack<int> elements;

  int userChoice;

  elements.push(3);
  elements.push(8);
  elements.push(6);
  elements.push(0);
  
  cout << "The support functions we will demonstrate for this program are below, select which you would like to see a demonstration of: " << endl;
  display();

  cin >> userChoice;

  (userChoice == 1) ? void(pushExample(elements)) :
    (userChoice == 2) ? void(popExample(elements)) :
      (userChoice == 3) ? void(topExample(elements)) :
        (userChoice == 4) ? void(sizeExample(elements)) : 
          void(cout << " ");

  while(!elements.empty()) {
    elements.pop();
  }

}


void display() {
  cout << "1.) push()\n2.) pop()\n3.) top()\n4.) size()" << endl;
}

void pushExample(stack<int> &elements) {
  vector<int> numbersVec;

  while (!elements.empty()) {
    numbersVec.push_back(elements.top()); // pushes back the elements from stack into vector
    elements.pop(); // pops names from stack to vector
  }

  cout << "Before push command: ";
  for (const int& number : numbersVec) {
    cout << " " << number;
  }
  cout << endl;
  cout << "After pushing element 1 to stack: ";
  elements.push(1);

  while (!elements.empty()) {
      numbersVec.push_back(elements.top()); // pushes back the elements from stack into vector
      elements.pop(); // pops names from stack to vector
  }

  for (const int& number : numbersVec) {
    cout << " " << number;
  }

}

void popExample(stack<int> &elements) {
  // Create a temporary stack to hold elements
    stack<int> tempStack;
    cout << "Before popping element from stack: ";

    // Transfer elements from the original stack to the temporary stack
    while (!elements.empty()) {
        cout << " " << elements.top(); // Display the top element
        tempStack.push(elements.top()); // Push to temporary stack
        elements.pop(); // Pop from original stack
    }

    cout << endl;

    // Now pop the top element from the temporary stack
    if (!tempStack.empty()) {
        tempStack.pop(); // Remove the top element
    }

    cout << "After popping one element from stack: ";

    // Transfer the elements back to the original stack and display
    while (!tempStack.empty()) {
        cout << " " << tempStack.top(); // Display the top element
        elements.push(tempStack.top()); // Push back to original stack
        tempStack.pop(); // Pop from temporary stack
    }

    cout << endl; // New line for better output formatting
}

void topExample(stack<int> &elements) {
  
    if (!elements.empty()) {
        cout << "Top element of the stack is: " << elements.top() << endl;
    } else {
        cout << "Stack is empty, no top element!" << endl;
    }
}

void sizeExample(stack<int> &elements) {
    cout << "Size of the stack is: " << elements.size() << endl;
}