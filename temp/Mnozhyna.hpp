//
//  Mnozhyna.hpp
//  Task2
//
//  Created by Сергей Глушенков on 25.10.17.
//  Copyright © 2017 Сергей Глушенков. All rights reserved.
//

#ifndef Mnozhyna_hpp
#define Mnozhyna_hpp

#include <stdio.h>

#endif /* Mnozhyna_hpp */
#include "iostream"
using namespace std;
class Mnozhyna {
public:
    Mnozhyna(unsigned a[], int n);
    Mnozhyna operator +=(unsigned q);
    Mnozhyna operator -=(unsigned q);
    Mnozhyna operator =(Mnozhyna q);
    friend std::ostream& operator<<(std::ostream& str, Mnozhyna q);
private:
    unsigned arr[1000];
};
