`//
//  15.3.cpp
//  C++ basic
//
//  Created by apple on 2018/8/26.
//  Copyright © 2018 Runyu Zhang(张润宇). All rights reserved.
//

#include "15.3.hpp"
#include<iostream>
using namespace std;

int squareByValue(int);
int squareByRef(int &);

int main(){
    int x = 2;
    int y = 4;
    
    cout<<"The inital value is "<<x<<endl;
    cout<<"The function return is "<<squareByValue(x)<<endl;
    cout<<"The final value is "<<x<<endl;
    
    cout<<"The inital value by reference is "<<y<<endl;
    squareByRef(y);
    cout<<"The changed value is "<<y<<endl;
    
    return 0;

int squareByValue(int number){
    return number*number;
}

int squareByRef(int &number){
    number *=number;
    return 0;
}
