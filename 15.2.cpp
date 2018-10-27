//
//  15.2.cpp
//  C++ basic
//
//  Created by apple on 2018/8/26.
//  Copyright © 2018 Runyu Zhang(张润宇). All rights reserved.
//

#include "15.2.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

inline double cube(const double side){
    return side*side*side;
}

int main() {
    double side;
    
    cout<<"Enter the side: ";
    cin>>side;
    cout<<"The result is: "<<cube(side)<<endl;
    
    return 0;

}
