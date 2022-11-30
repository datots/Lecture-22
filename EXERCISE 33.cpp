#include <iostream>
using namespace std;

bool check_prime(int n);

int main() {

  int m, y;
  bool flag = false;

  cout << "Enter a positive  integer: ";
  cin >> m;

  for(y = 2; y <= m/2; ++y) {
    if (check_prime(y)) {
      if (check_prime(m - y)) {
        cout << m << " = " << y << " + " << m-y << endl;
        flag = true;
      }
    }
  }

  if (!flag)
    cout << m << " can't be expressed as sum of two prime numbers.";

  return 0;
}

// check prime number
bool check_prime(int m) {
  int y;
  bool is_prime = true;

  // 0 and 1 are not prime numbers
  if (m == 0 || m == 1) {
    is_prime = false;
  }
  
  for(y = 2; y <= m/2; ++y) {
    if(m % y == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}
