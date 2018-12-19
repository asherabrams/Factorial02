//
//  main.cpp
//  Factorial02
//
//  Created by Asher Abrams on 2018/12/19.
//  Copyright © 2018 | 5779 Asher Abrams. All rights reserved.
//
//  Returns a list of factorials.

// PREPROCESSOR
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// DECLARATIONS
long int x=1;
long int y;
long int func01(long int);

// DEFINITIONS
long int func01(long int x)
{
    for(y = 1; y < 16; y++)
    {
        x = x*y;
        cout << y << '\n';
        cout << x << '\n';
        cout << '\n';
    }
    return x;
}

// MAIN
int main() {
    func01(x);
    return 0;
}

