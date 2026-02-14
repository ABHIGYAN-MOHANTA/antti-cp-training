#include <algorithm>
#include <functional>
#include <iostream>
#include <string>

using namespace std;

bool comp(string a, string b) {
  if (a.size() != b.size())
    return a.size() < b.size();
  return a < b;
}

// void merge(int a[], int left, int mid, int right) {
//   int n1 = mid - left + 1;
//   int n2 = right - mid;
//
//   int L[n1], R[n2];
//
//   // Copy data
//   for (int i = 0; i < n1; i++)
//     L[i] = a[left + i];
//
//   for (int i = 0; i < n2; i++)
//     R[i] = a[mid + 1 + i];
//
//   int i = 0, j = 0, k = left;
//
//   // Merge the temp arrays back
//   while (i < n1 && j < n2) {
//     if (L[i] <= R[j]) {
//       a[k] = L[i];
//       i++;
//     } else {
//       a[k] = R[j];
//       j++;
//     }
//     k++;
//   }
//
//   // Copy remaining elements
//   while (i < n1) {
//     a[k] = L[i];
//     i++;
//     k++;
//   }
//
//   while (j < n2) {
//     a[k] = R[j];
//     j++;
//     k++;
//   }
// }

// void mergeSort(int a[], int l, int r) {
//   if (l >= r) {
//     return;
//   }
//
//   int mid = l + (r - l) / 2;
//   mergeSort(a, l, mid);
//   mergeSort(a, mid + 1, r);
//
//   merge(a, l, mid, r);
// }

int main() {
  int a[] = {-1, 2, 4, -3, 5, 2, -5, 2};
  int n = sizeof(a) / sizeof(a[0]);

  // Bubble Sort O(n^2)
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n - 1; j++) {
  //     if (a[j] > a[j + 1]) {
  //       int k = a[j];
  //       a[j] = a[j + 1];
  //       a[j + 1] = k;
  //     }
  //   }
  // }

  // Merge sort O(nlogn)
  // mergeSort(a, 0, n - 1);

  // Counting sort O(n) - Bookkeeping sort ehen numbers are between 0 and c,
  // basically put everything in a frequency array in O(n) time and the O(n)
  // time to form the array
  // int b[] = {0, 2, 2, 1, 5, 3, 4, 7, 4};
  // int c = 10;
  // int f[10] = {0};
  // int m = sizeof(b) / sizeof(b[0]);
  //
  // for (int i = 0; i < m; i++) {
  //   f[b[i]]++;
  // }
  //
  // int bi = 0;
  // for (int i = 0; i < c; i++) {
  //   while (f[i] > 0) {
  //     b[bi] = i;
  //     bi++;
  //     f[i]--;
  //   }
  // }

  vector<int> v = {4, 2, 5, 3, 5, 8, 3};
  sort(v.begin(), v.end());   // ascendinng order
  sort(v.rbegin(), v.rend()); // descending order

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << "\n";

  sort(a, a + n);
  sort(a, a + n, greater<int>()); // for descending otherwise, can also do
                                  // reverse(a, a+n) after sorting

  for (int i = 0; i < n; i++) {
    cout << a[i] << ", ";
  }

  cout << "\n";

  string s = "monkey";
  sort(s.begin(), s.end());

  cout << s << "\n";

  vector<pair<int, int>> vp;
  vp.push_back({1, 5});
  vp.push_back({2, 3});
  vp.push_back({1, 2});
  sort(vp.begin(), vp.end());

  for (auto p : vp) {
    cout << p.first << " " << p.second << "\n";
  }

  struct P {
    int x, y;
    bool operator<(const P &p) {
      if (x != p.x)
        return x < p.x;
      else
        return y < p.y;
    }
  };

  sort(v.begin(), v.end());

  // Binary Search - Method 1
  // int a = 0;
  // b = n - 1;
  // while (a <= b) {
  //   int k = (a + b) / 2;
  //   if (a[k] == x) {
  //     // found at k
  //   }
  //   if (a[k] > x) {
  //     b = k - 1;
  //   } else {
  //     a = k + 1;
  //   }
  // }

  sort(a, a + n); // sorting req for next stuff
  // another way  to search, binary search used underneath
  int x = 2;
  auto k = lower_bound(a, a + n, x) - a;
  if (k < n && a[k] == x) {
    // x found at index k
  }

  // the following code counts the number of elements whose value is x:
  auto al = lower_bound(a, a + n, x);
  auto bu = upper_bound(a, a + n, x);
  cout << bu - al << "\n";

  // Using equal_range, the code becomes shorter:
  auto r = equal_range(a, a + n, x);
  cout << r.second - r.first << "\n";
}
