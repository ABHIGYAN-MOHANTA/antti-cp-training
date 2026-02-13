// maximum subarray sum
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
  int n = sizeof(array) / 4;
  int best = 0;

  // O(n^3)
  // for (int a = 0; a < n; a++) {
  //   for (int b = a; b < n; b++) {
  //     int sum = 0;
  //     for (int k = a; k <= b; k++) {
  //       sum += array[k];
  //     }
  //     best = max(best, sum);
  //   }
  // }

  // O(n^2)
  // for (int a = 0; a < n; a++) {
  //   int sum = 0;
  //   for (int b = a; b < n; b++) {
  //     sum += array[b];
  //     best = max(sum, best);
  //   }
  // }

  // O(n) Kadane's a;
  // The idea is to calculate, for each array position, the maximum sum of a
  // subarray that ends at that position. After this, the answer for the problem
  // is the maximum of those sums. Consider the subproblem of finding the
  // maximum-sum subarray that ends at position k. There are two
  // possibilities: 1. The subarray only contains the element at position k. 2.
  // The subarray consists of a subarray that ends at position k −1, followed by
  // the element at position k.

  int sum = 0;
  for (int a = 0; a < n; a++) {
    sum = max(array[a], sum + array[a]);
    best = max(best, sum);
  }
  cout << best << "\n";
}
