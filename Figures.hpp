//
//  Figures.hpp
//  Module1
//
//  Created by Сергей Глушенков on 25.10.17.
//  Copyright © 2017 Сергей Глушенков. All rights reserved.
//

#ifndef Figures_hpp
#define Figures_hpp

#include <stdio.h>

#endif /* Figures_hpp */

class Figures
{
public:
    virtual void Draw()=0;

};
class X : public Figures
{
public:
    void Draw() override;
};
class Trapezia : public Figures
{
public:
    void Draw() override;
};
