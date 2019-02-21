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

int main(int argc, const char * argv[])
{

    std::cout<<number_of_iterations(2)<<std::endl;
    
}
