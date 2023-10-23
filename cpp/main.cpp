#include <iostream>

using namespace std;

int main(int argc, char ** argv, char ** env) {
  cout << "argc = " << argc << endl;
  for (int i = 0; i < argc; ++i) {
    cout << "argv[" << i << "] = " << argv[i] << endl;
  }
  while (*env != NULL) {
    cout << *env << endl;
    ++env;
  }
  return 0;
}
