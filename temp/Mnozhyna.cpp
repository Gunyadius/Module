//
//  Mnozhyna.cpp
//  Task2
//
//  Created by Сергей Глушенков on 25.10.17.
//  Copyright © 2017 Сергей Глушенков. All rights reserved.
//

#include "Mnozhyna.hpp"
Mnozhyna::Mnozhyna(unsigned a[], int n)
{
    unsigned check[n];
    check[0]=a[0];
    arr[0]=a[0];
    bool flag=0;
    for(int i=1;i<n;i++)
    {
        flag=0;
        for (int j=0;j<=i;j++)
        {
            if (a[i]==check[j])
                flag=1;
        }
        if(!flag)
            arr[i]=a[i];
    }
}
Mnozhyna Mnozhyna::operator+=(unsigned q)
{
    unsigned int w=sizeof(arr);
    this->arr[w]=q;
    return *this;
}
Mnozhyna Mnozhyna::operator -=(unsigned q)
{
    unsigned int w=sizeof(arr);
    for(unsigned int i=0;i<w;i++)
    {
        if(arr[i]==q)
            for(unsigned int j=i;j<w;j++)
                arr[j]=arr[j+1];
    }
    return *this;
}
