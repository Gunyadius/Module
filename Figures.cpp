//
//  Figures.cpp
//  Module1
//
//  Created by Сергей Глушенков on 25.10.17.
//  Copyright © 2017 Сергей Глушенков. All rights reserved.
//

#include "Figures.hpp"
#include <iostream>
using namespace std;
/*void Figures::Draw()
{
    cout<<"Wrong expression!";
}*/
void X::Draw()
{
    cout<<"\t"<<"*"<<"\n"<<"*"<<"\t"<<"*"<<"\t"<<"*"<<"\n"<<"\t"<<"*"<<"\n";
}
void Trapezia::Draw()
{
    cout<<" "<<" "<<"*"<<"*"<<"*"<<"\n";
    cout<<" "<<"*"<<"\t"<<" "<<"*"<<"\n";
    for (int i=0;i<7;i++)
        cout<<"*";
    cout<<"\n";
}
