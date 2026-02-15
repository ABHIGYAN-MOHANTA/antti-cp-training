#include <algorithm>
#include <bitset>
#include <iostream>
#include <map>
#include <random>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  // Dynamic Arrays O(1)
  vector<int> v;
  v.push_back(3); // [3]
  v.push_back(2); // [3,2]
  v.push_back(5); // [3,2,5]

  cout << v[0] << "\n"; // 3
  cout << v[1] << "\n"; // 2
  cout << v[2] << "\n"; // 5

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << "\n";
  }

  for (auto x : v) {
    cout << x << ", ";
  }
  cout << endl;

  cout << v.back() << "\n"; // 5  // returns the last element
  v.pop_back();             // 5 // but this removes the last element as well
  cout << v.back() << "\n"; // 2

  vector<int> v1 = {2, 4, 2, 5, 1}; // creates a vector of 5 elements
  vector<int> v2(10);               // creates a vector of 10 elements
  vector<int> v3(10, 5);            // size 10, initial value 5

  string a = "hatti";
  string b = a + a;
  cout << b << "\n";
  cout << b[5] << "\n"; // h
  b[5] = 'v';
  cout << b << "\n";         // hattivatti
  string c = b.substr(3, 4); // 3 -> start, 4 -> length of new string
  cout << c << "\n";         // tiva

  ////////////////////////////////////////////////////////////////////////////

  // Set - Based on Balanced Dynamic Arrays O(logn) for its operations, it
  // maintains order of elements
  // unordered_set uses hashing, it takes O(1) on
  // avg for its operations

  set<int> s;
  s.insert(3);
  s.insert(2);
  s.insert(5);
  cout << s.count(3) << "\n"; // 1
  cout << s.count(4) << "\n"; // 0

  set<int> st = {2, 5, 6, 8};
  cout << st.size() << "\n"; // 4
  for (auto x : st) {
    cout << x << "\n";
  }

  s.insert(5);
  s.insert(5);
  s.insert(5);
  cout << s.count(5) << "\n"; // 1

  // C++ also contains the structures multiset and unordered_multiset that
  // otherwise work like set and unordered_set but they can contain multiple
  // instances of an element

  multiset<int> ms;
  ms.insert(5);
  ms.insert(5);
  ms.insert(5);
  cout << ms.count(5) << "\n"; // 3

  // ms.erase(5);                 // removes all instances of 5
  // cout << ms.count(5) << "\n"; // 0

  ms.erase(ms.find(5));        // to remove only one element
  cout << ms.count(5) << "\n"; // 2

  ms.insert(1);
  ms.insert(2);
  ms.insert(3);
  ms.insert(2);

  // auto it = ms.find(2); // 3 // {5,5,1,2,3,2}
  //
  // if (it != ms.end()) {
  //   cout << *it << "\n";
  // }

  /////////////////////////////////////////////////////////////////

  // Map - similar to set has 2 implementations
  // based on a balanced binary tree and accessing elements takes O(logn) time
  // unordered_map uses hashing and accessing elements takes O(1) time on
  // average
  map<string, int> m;
  m["monkey"] = 4;
  m["banana"] = 3;
  m["harpsichord"] = 9;
  cout << m["banana"] << "\n"; // 3

  cout << m["aybabtu"]
       << "\n"; // 0  // the key got added to m, since it didn't exist earlier,
                // with default value is 0 here for int

  if (m.count("aybabtu")) { // to check if key exists
                            // key exists
  }

  for (auto x : m) {
    cout << x.first << " " << x.second << "\n";
  }

  ///////////////////////////////////////////////////////////////

  // Iterators and Ranges
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());

  mt19937 rng(random_device{}());
  shuffle(v.begin(), v.end(), rng);

  // Set iterators
  // set<int>::iterator it = s.begin();
  auto iter = s.begin();
  cout << *iter << "\n";

  for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << "\n";
  }

  // Largest element in set
  // auto it = s.end();
  // it--;
  // cout << *it << "\n";

  // auto it = s.find(x);
  // if (it == s.end()) {
  //   // x is not found
  // }

  // finds the element nearest to x
  int x = 1;
  auto it = s.lower_bound(x);
  if (it == s.begin()) {
    cout << *it << "\n";
  } else if (it == s.end()) {
    it--;
    cout << *it << "\n";
  } else {
    int a = *it;
    it--;
    int b = *it;
    if (x - b < a - x)
      cout << b << "\n";
    else
      cout << a << "\n";
  }

  // Bitset
  bitset<10> bs;
  bs[1] = 1;
  bs[3] = 1;
  bs[4] = 1;
  bs[7] = 1;
  cout << bs[4] << "\n"; // 1
  cout << bs[5] << "\n"; // 0

  // bitset<10> s(string("0010011010")); // from right to left  ****
  // cout << s[4] << "\n"; // 1
  // cout << s[5] << "\n"; // 0

  // count returns the number of ones in the bitset
  // bitset<10> s(string("0010011010"));
  // cout << s.count() << "\n"; // 4

  // bit operations
  // bitset<10> a(string("0010110110"));
  // bitset<10> b(string("1011011000"));
  // cout << (a & b) << "\n"; // 0010010000
  // cout << (a|b) << "\n"; // 1011111110
  // cout << (a^b) << "\n"; // 1001101110
}
