#include <deque>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
  // Deque -- dynamic array whose size can be efficiently changed at both ends
  // of the array. Like a vector, a deque provides the functions push_back and
  // pop_back, but it also includes the functions push_front and pop_front which
  // are not available in a vector.
  deque<int> d;
  d.push_back(5);  // [5]
  d.push_back(2);  // [5,2]
  d.push_front(3); // [3,5,2]
  d.pop_back();    // [3,5]
  d.pop_front();   // [5]

  // Stack -- O(1) time operations: adding an element to the end of the queue,
  // and removing the first element in the queue. It is only possible to access
  // the first and last element of a queue.
  stack<int> s;
  s.push(3);
  s.push(2);
  s.push(5);
  cout << s.top(); // 5
  s.pop();
  cout << s.top(); // 2

  // Queue -- O(1) time operations: adding an element to the end of the queue,
  // and removing the first element in the queue. It is only possible to access
  // the first and last element of a queue.
  // queue<int> q;
  // q.push(3);
  // q.push(2);
  // q.push(5);
  // cout << q.front(); // 3
  // q.pop();
  // cout << q.front(); // 2

  // Priority queue Insertion and removal take O(logn) time,
  // and retrieval takes O(1) time
  // heap structure that is much simpler than a balanced binary tree used in an
  // ordered set. By default, the elements in a C++ priority queue are sorted in
  // decreasing order, and it is possible to find and remove the largest element
  // in the queue
  priority_queue<int> q;
  q.push(3);
  q.push(5);
  q.push(7);
  q.push(2);
  cout << q.top() << "\n"; // 7
  q.pop();
  cout << q.top() << "\n"; // 5
  q.pop();
  q.push(6);
  cout << q.top() << "\n"; // 6
  q.pop();

  // If we want to create a priority queue that supports finding and removing
  // the smallest element, we can do it as follows:
  // priority_queue<int,vector<int>,greater<int>> q;

  // Policy-based data structures like indexed_set also available

  // Comparison to sorting, sometimes sorting even though has the same time
  // complexity can be 10 times faster, due to its simple nature, and not
  // traversing and maintaining a balanced b tree etc
}
