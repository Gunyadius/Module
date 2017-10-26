//
//  main.cpp
//  Task2
//
//  Created by Сергей Глушенков on 25.10.17.
//  Copyright © 2017 Сергей Глушенков. All rights reserved.
//

#include <iostream>
#include "Mnozhyna.hpp"
using namespace std;
int main() {
    unsigned arr1[5]={2,1,2,9};
    Mnozhyna a(arr1,5);
    Mnozhyna c;
    unsigned arr2[3]={3,1,8};
    Mnozhyna b(arr2,3);
    c= a+b;
    b+=10;
    b-=3;
    if(a==b)
        cout<<"good!"<<"\n";
    cout<<b;
    cout<<a;
    cout<<c;
    c=a;
    cout << "Hello, World!\n";
    return 0;
}
