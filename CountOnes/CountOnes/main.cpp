//
//  main.cpp
//  CountOnes
//
//  Created by Hamed Mirlohi on 2/20/19.
//  Copyright © 2019 Hamed Mirlohi. All rights reserved.
//

#include <iostream>

int number_of_iterations(int number)
{
    unsigned int count = 0;
    while(number > 1)
    {
        number = number / 2;
        ++count;
    }
    return ++count;
}

unsigned int number_of_ones(int number, unsigned int it)
{
    unsigned int count = 0;
    for(int i = 0; i < it; i++)
    {
        if((number & 0x1) == 1)
            ++count;
        number = number >> 1;
    }
    return count;
}

int main(int argc, const char * argv[])
{
    unsigned int result;
    result = number_of_ones(32, number_of_iterations(32));
    std::cout<<result<<std::endl;
}
