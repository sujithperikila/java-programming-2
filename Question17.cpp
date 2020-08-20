#include <bits/stdc++.h> 
using namespace std; 
  
// This function return the sorted stack 
stack<int> sortStack(stack<int> &input) 
{ 
    stack<int> tmpStack; 
  
    while (!input.empty()) 
    { 
    
        int tmp = input.top(); 
        input.pop(); 
  
        while (!tmpStack.empty() && tmpStack.top() > tmp) 
        { 
            input.push(tmpStack.top()); 
            tmpStack.pop(); 
        } 
  
       
        tmpStack.push(tmp); 
    } 
  
    return tmpStack; 
} 
  
 
int main() 
{ 
    stack<int> input;
	stack<int> tempprint;
	stack<int> temp2; 
    input.push(14); 
    input.push(63); 
    input.push(35); 
    input.push(108); 
    input.push(73); 
    input.push(19); 
    tempprint=input;
    
    cout<<"Unsorted Stack is : \n";
    while (!tempprint.empty()) 
    { 
        cout << tempprint.top()<< " "; 
        tempprint.pop(); 
    } 
    cout<"\n";
  
    stack<int> tmpStack = sortStack(input); 
    cout << "\nSorted numbers are:\n"; 
    
  
    while (!tmpStack.empty()) 
    { 
        temp2.push(tmpStack.top()); 
        tmpStack.pop(); 
    }
    while (!temp2.empty()) 
    { 
        cout << temp2.top()<< " "; 
        temp2.pop(); 
    } 
    
} 
