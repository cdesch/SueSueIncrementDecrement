//
//  main.cpp
//  SueIncrementDecrement
//
//  Created by cj on 11/18/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    

    std::cout << "for i++"<< std::endl;
    for (int i = 0; i < 10; i++ ){
        std::cout << i << std::endl;
    }

    std::cout << "for ++i" << std::endl;
    for (int i = 0; i < 10; ++i ){
        std::cout << i << std::endl;
    }
    
    std::cout << "while i++" << std::endl;
    int i = 0;
    while (i < 10){
        std::cout << i++ << std::endl;
    }
    
    std::cout << "while ++i" << std::endl;
    i = 0;
    while (i < 10){
        std::cout << ++i << std::endl;
    }
    return 0;
}
