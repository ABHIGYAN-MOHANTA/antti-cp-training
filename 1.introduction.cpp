#include <cmath>
#include <iostream>

using namespace std;

int main() {
  // int a, b;
  // string x;
  // cin >> a >> b >> x;
  // cout << a << " " << b << " " << x << "\n"; // \n always faster than endl
  // scanf("%d %d", &a,
  //       &b); // c funcs can also be used for io like scanf and printf
  // printf("%d %d\n", a, b);
  // string s;
  // getline(cin, s); // read entire line
  //
  // // while (cin >> x) { // code } // for unkown amount of data
  //
  // // files
  // fropen("input.txt", "r", stdin);
  // fropen("output.txt", "w", stdout);

  // long long
  // int a = 123456789;
  // long long b = (long long)a * a; // type casting required here else
  // -1757895751 cout << b << "\n";

  // __int128_t x = 23287348923892349838324; // available sometimes for 128 bit
  // int

  // some modulo properties
  // (a+ b) mod m = (a mod m+ b mod m) mod m
  // (a− b) mod m = (a mod m− b mod m) mod m
  // (a· b) mod m = (a mod m· b mod m) mod m

  // int m = 11, n = 7;
  // long long x = 1;
  // for (int i = 2; i <= n; i++) { // this way of finding modulo of n!, we dont
  //                                // need to store n! and it doesn't exceed
  //                                space
  //   x = (x * i) % m;
  // }
  //
  // cout << x % m << "\n";

  // printf("%.9f\n", x);
  // double x = 0.3*3+0.1;
  // printf("%.20f\n", x); // 0.99999999999999988898

  // if(abs(a -b) < 1e-9) // a and b are equal

  typedef long long ll; // rename long long as ll
  ll a = 123456789;
  ll b = 987654321;
  cout << a * b << "\n";

  // typedef vector<int> vi;
  // typedef pair<int, int> pi;

  // some maths - see book page 20 fn + left arrow key
  // Faulhaber’s formula
  //
  // Binet’s formula: for fibonacci series
  //
  // Another property of logarithms is that the number of digits of an integer x
  // in base b is ⌊logb(x)+1⌋. For example, the representation of 123 in base 2
  // is 1111011 and ⌊log2(123)+1⌋ = 7.
  //
  // ll s = 0;
  // int i = 0;
  // while(sq(2*i+1) < )
  // cout << s << "\n";
}
