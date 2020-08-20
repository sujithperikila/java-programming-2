#include <bits/stdc++.h> 
using namespace std; 
  

void reverseQueueFirstKElements( int k, queue<int>& Queue) 
{ 
    if (Queue.empty() == true || k > Queue.size()) 
        return; 
    if (k <= 0) 
        return; 
  
    stack<int> Stack; 
    
    for (int i = 0; i < k; i++) { 
        Stack.push(Queue.front()); 
        Queue.pop(); 
    } 
  
    while (!Stack.empty()) { 
        Queue.push(Stack.top()); 
        Stack.pop(); 
    } 
  

    for (int i = 0; i < Queue.size() - k; i++) { 
        Queue.push(Queue.front()); 
        Queue.pop(); 
    } 
} 
  
void Print(queue<int>& Queue) 
{ 
    while (!Queue.empty()) { 
        cout << Queue.front() << " "; 
        Queue.pop(); 
    } 
} 
  
// Driver code 
int main() 
{ 
    queue<int> Queue; 
    Queue.push(10); 
    Queue.push(20); 
    Queue.push(30); 
    Queue.push(40); 
    Queue.push(50); 
    Queue.push(60); 
    Queue.push(70); 
    Queue.push(80); 
    Queue.push(90); 
    Queue.push(100); 
  
    int k;
	cout<<"Enter how many number of first elements you want to reverse: "<<endl;
	cin>>k; 
    reverseQueueFirstKElements(k, Queue); 
    Print(Queue); 
} 
