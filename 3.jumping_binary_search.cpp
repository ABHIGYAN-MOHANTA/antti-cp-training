#include <iostream>

using namespace std;

// Strict monotonicity
// this doesn't necessarily give the first occurence
// and incase of functions: Note that unlike in the ordinary binary search, here
// it is not allowed that consecutive values of the function are equal. In this
// case it would not be possible to know how to continue the search.

int main() {
  int a[] = {-1, 2, 4, -3, 5, 2, -5, 2};
  int n = sizeof(a) / sizeof(a[0]);
  int x = 2;

  sort(a, a + n); // sort first

  int k = 0;                            // current index
  for (int b = n / 2; b >= 1; b /= 2) { // b is jump value, initially n/2
    while (k + b < n && a[k + b] <= x) {
      k += b;
    }
  }

  if (a[k] == x) {
    cout << "found at " << k << "\n";
  }

  // Finding the smallest solution
  // int x = -1;
  // for(int b = z; b >= 1; b /= 2){ // The initial jump length z has to be
  // large enough, for example some value for which we know beforehand that
  // ok(z) is true.
  //   while(!ok(x+b)) x += b;
  // }
  //
  // int k = x+1;

  // Finding the maximum value
  // f (x) < f (x+1) when x < k
  // f (x) > f (x+1) when x ≥ k
  // int x = -1;
  // for (int b = z; b >= 1; b /= 2) {
  //   while (f(x + b) < f(x + b + 1))
  //     x += b;
  // }
  // int k = x + 1;
}
