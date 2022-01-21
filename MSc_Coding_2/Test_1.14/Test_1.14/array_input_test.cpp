//
//  array_input_test.cpp
//  Test_1——15.cpp
//
//  Created by Simon Sheng on 2022/1/19.
//


#include <iostream>
#include <string>
using namespace std;

int main() {
    int x =4;
  string cars[x];
  for(int i = 0; i < 4; i++) {
    cin >> cars[i];
  }
  cout << cars[0];
}
