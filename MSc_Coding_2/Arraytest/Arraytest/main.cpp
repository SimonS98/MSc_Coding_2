//
//  main.cpp
//  Arraytest
//
//  Created by Simon Sheng on 2022/1/19.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    int B;
  string cars[B];
  for(int i = 0; i < 4; i++) {
    cin >> cars[i];
      //cout << "cars:"<<cars[i]<<"\n";
  }
    
    
    for (int x =0; x<4; x++){
        cout<<"cars:"<<cars[x]<<endl;

        }
    for (int y=0;y<4;y+=2){
        string &CAR = cars[y];
        cout<<"CAR:"<< CAR<<"\n";
        cout << CAR<<endl;
    }



}
