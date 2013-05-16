#include <iostream>
#include <future>
#include <vector>
#include <chrono>
using namespace std;

int square(int x) {
  return x * x;
}

int main() {
  vector<future<int>> futures;
  for (int i = 0; i < 20; i++) {
    futures.pushback(async(&sqare, 10));
  }

  int accum = 0;
  for (int i = 0; i < futures.size(); i++) {
    accum += futures[i];
  }

  cout << "accum = " << accum << endl;
  return 0;
}
