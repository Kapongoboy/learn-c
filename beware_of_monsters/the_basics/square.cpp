#include <iostream>
#include <vector>
using namespace std;


constexpr double square(double x) {
  return x*x;
}

void print_square(double x) {
  cout << "the square of " << x << " is " << square(x) << "\n";
}

void some_function() {
  double d = 2.2;
  int i = 7;
  d = d+i;
  i = d*i;
}

void constants() {
  const int dmv = 16;
  int var = 16;
  // constexpr double max1 = 1.4*square(dmv);
  // constexpr double max2 = 1.4*square(var);
  const double max3 = 1.4*square(var);
  double sum(const vector<double>&);
  vector<double> v{1.2, 3.4, 4.5};
  const double s1 = sum(v);
  // constexpr double s2 = sum(v);
}

int main (int argc, char *argv[])
{
  print_square(1.234);
  return 0;
}
