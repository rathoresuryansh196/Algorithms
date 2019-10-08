#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;

void printq(queue <ll> q) 
{ 
    queue <ll> g = q; 
    while (!g.empty()) 
    { 
        cout << " " << g.front(); 
        g.pop(); 
    } 
    cout << "\n"; 
} 
  
int main() 
{ 
    queue <ll> q; 
    q.push(10); 
    q.push(20); 
    q.push(30); 
  
    cout << "The queue q is : "; 
    printq(q); 
  
    cout << "\n q.size() : " <<  q.size(); 
    cout << "\n q.front() : " << q.front(); 
    cout << "\n q.back() : " <<  q.back(); 
  
    cout << "\n q.pop() : "; 
    q.pop(); 
    printq(q); 
  
    return 0; 
} 
