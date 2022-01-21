//
//  Header.h
//  Coding2_Week1_SIxiong_Sheng
//
//  Created by Simon Sheng on 2022/1/20.
//

#ifndef sortSX_h
#define sortSX_h
#include <iostream>
#include <string>
using namespace std;
 /* Header_h */

class sortSX{
public:
    //int x1[10];
    //int &x2 = x1[10];
    //int x2[];
    void swap_up(int (&x1)[10]);
    void swap_down(int (&x1)[10]);
    void ptArray(int (&array)[10]);
    //void swap_down (int x1[10]);
    

};


void sortSX::ptArray(int (&array)[10]){
    cout <<"\n";
    for (int i = 0; i <10; i++){
        cout << array[i]<<" ";
    };
    cout<<"\n"<<"\n";
}


void sortSX::swap_up(int (&x1)[10]){
    for (int i = 0; i < 10; ++i)
    {
        for (int j = i + 1; j < 10; ++j)
        {
            if (x1[i] > x1[j])
            {
                int temp = x1[i];
                x1[i] = x1[j];
                x1[j] = temp;;
            }
        }
    }
}

void sortSX::swap_down(int (&x1)[10]){
    for (int i = 0; i < 10; ++i)
    {
        for (int j = i + 1; j < 10; ++j)
        {
            if (x1[i] < x1[j])
            {
                int temp = x1[i];
                x1[i] = x1[j];
                x1[j] = temp;;
            }
        }
    }
}
#endif
