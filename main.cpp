//
//  main.cpp
//  practice2
//
//  Created by hui xu on 04/09/2017.
//  Copyright © 2017 hui xu. All rights reserved.
//

#include <iostream>
#include<valarray>
#include<cstdlib>
const int SIZE=12;

typedef std::valarray<int> vint;
void sshow(const int & v, int cols);


int main()
{
  // eat my poop
    using std::slice;
    using std::cout;
    vint valint(SIZE);
    int i;
    for(i=0;i<SIZE;++i)
        valint[i]=std::rand()%10;
    how(valint,3);
