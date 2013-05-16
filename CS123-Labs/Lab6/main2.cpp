#include <iostream>
#include <vector>
#include <thread>
using namespace std;

mutex accum_mutex;

void square(int& accum, int x) {
  int temp = x * x;
  accum_mutex.lock();
  accum += temp;
  accum_mutex.unlock();
}

int main() {
  int accum = 0;
  vector<thread> ths;
  for (int i = 1; i <= 20; i++) {
    ths.push_back(thread(&square, ref(accum), i));
  }

  for (auto& th : ths) {
    th.join();
  }
 
  cout << "accum = " << accum << endl;
  return 0;
}
