//
//  main.cpp
//  Coding2_Week1_SIxiong_Sheng
//
//  Created by Simon Sheng on 2022/1/20.
//

#include <iostream>
#include "sortSX.h"
#include <string>
using namespace std;



int main() {
    cout << "Please enter 10 numbers to be sorted:" << endl;
    int numArray[10];
    for (int i = 0; i <10; i++){
        cout<< i+1 <<":";
        cin >> numArray[i];
    }
    cout << "The current Array is:";
    for (int i = 0; i <10; i++){
        cout << numArray[i]<<" ";
    }
    cout <<"\n"<<"\n"<<"Ascending(Enter A) or (D)Descending(Enter D)?"<<"\n"<<endl;
    char answer;
    cin >> answer;
    sortSX swap1;
    sortSX swap2;
    switch(answer){
        case 'A':
            swap1.swap_up(numArray);
            swap2.ptArray(numArray);
            break;
        case 'a':
            swap1.swap_up(numArray);
            swap2.ptArray(numArray);
            break;
        case 'D':
            swap1.swap_down(numArray);
            swap2.ptArray(numArray);
            break;
        case 'd':
            swap1.swap_down(numArray);
            swap2.ptArray(numArray);
            break;
    }
    return 0;
}
