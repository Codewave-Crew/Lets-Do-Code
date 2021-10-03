#include <iostream>
using namespace std;

int main() {
    
  for (int i = 0; i < 10; i++) {
    cout << "Hello World - For Loop\n";
  }
  
  int x = 0;
  
  while(x < 10){
      cout << "Hello World - While Loop\n";
      x++;
  }
  
  int y = 0;
  
  do {
      cout << "Hello World - Do While Loop\n";
      y++;
  } while(y < 10);
  
  return 0;
}