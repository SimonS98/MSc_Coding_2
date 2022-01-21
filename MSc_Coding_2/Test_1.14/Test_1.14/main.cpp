//
//  main.cpp
//  Test_1.14
//
//  Created by Simon Sheng on 2022/1/14.
//

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;
string myChar= "Hey";
int test = 2;


int main(int argc, const char * argv[]) {

    srand((int)time(NULL));
    int Rtime = rand();
    //cout << myChar << test << endl;
    cout << Rtime <<endl;
    return 0;
}
