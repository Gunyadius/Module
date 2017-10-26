//
//  Mnozhyna.cpp
//  Task2
//
//  Created by Сергей Глушенков on 25.10.17.
//  Copyright © 2017 Сергей Глушенков. All rights reserved.
//

#include "Mnozhyna.hpp"
Mnozhyna:: Mnozhyna()
{
    size=0;
}
Mnozhyna::Mnozhyna(unsigned a[], int n)
{
    unsigned check[n];
    int q=1;
    check[0]=a[0];
    arr[0]=a[0];
    bool flag=false;
    size=1;
    for(int i=1;i<n;i++)
    {
        flag=0;
        for (int j=0;j<=i;j++)
        {
            if (a[i]==check[j])
                flag=true;
        }
        if(!flag)
        {
            arr[size]=a[i];
            q+=1;
        }
         check[i]=a[i];
        size=q;
    }
    size=q;
}
Mnozhyna Mnozhyna::operator+=(unsigned q)
{
    bool flag=false;
    for(int i=0;i<this->size;i++)
        if (this->arr[i]==q)
            flag=true;
    if (!flag)
    {
        unsigned int w=this->size;
        this->arr[w]=q;
        this->size ++;
    }
    return *this;
}
Mnozhyna Mnozhyna::operator -=(unsigned q)
{
    bool flag=false;
    int i=0;
    while((i<this->size)&&(!flag))
    {
        if (this->arr[i]==q)
            flag=true;
        i++;
    }
    if (flag)
    {
        for(int j=i-1;j<this->size;j++)
        this->arr[j]=this->arr[j+1];
        this->size --;
    }
    return *this;
}
ostream& operator <<(ostream& str, Mnozhyna q)
{
    for (int i=0;i<q.size;i++)
        str<<q.arr[i]<<"\t";
    str<<"\n";
    return str;
}
bool Mnozhyna:: operator ==(Mnozhyna q)
{
    int i=0;
    bool flag=false;
    if (this->size!=q.size)
        return false;
    else
        while ((i<this->size)&&(!flag))
        {
            flag=true;
            int j=0;
            while ((j<this->size)&&(flag))
            {
                if (q.arr[j]==this->arr[i])
                    flag=false;
                j++;
            }
            i++;
        }
        if (!flag)
            return true;
    else
        return false;
        
}
void Mnozhyna:: operator =(Mnozhyna q)
{
    for(int i=0;i<q.size;i++)
        this->arr[i]=q.arr[i];
    this->size=q.size;
}
Mnozhyna Mnozhyna:: operator+(Mnozhyna q)
{
    Mnozhyna temp;
    bool flag=false;
    int j;
    for(int i=0;i<this->size;i++)
        temp.arr[i]=this->arr[i];
    temp.size=this->size;
    for (int i=0;i<q.size;i++)
    {
        j=0;
        while ((j<temp.size)&&(!flag))
        {
            if (q.arr[i]==temp.arr[j])
            {
                flag=true;
            }
            j++;
        }
        if (!flag)
        {
            int w=temp.size;
            temp.arr[w]=q.arr[i];
            temp.size ++;
        }
        flag=false;
    }
    return temp;
}
