//
//  module.cpp
//  Module1
//
//  Created by Сергей Глушенков on 25.10.17.
//  Copyright © 2017 Сергей Глушенков. All rights reserved.
//
#include "Figures.hpp"
#include <iostream>
using namespace std;

int main() {
    Figures *q;
    int x;
    bool flag=0;
    cout<< "Enter 1 if you want a ross, or enter 2 if you want a trapeze:"<<"\n";
    cin>>x;
    switch (x) {
        case 1:
            q=new X;
            break;
        case 2:
            q=new Trapezia;
            break;
        default:
        {
            cout<<"Wrong expression!"<<"\n";
            flag=1;
        }
            break;
    }
    if(!flag)
    {
        q->Draw();
    }
    return 0;
}
