//
//  main.cpp
//  arrayTest2
//
//  Created by Doruk Sınayuç on 11/02/16.
//  Copyright © 2016 Doruk Sınayuç. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int getRandomNumber();

int main(int argc, const char * argv[]) {
    int randomNumber[10];
    
    for (int i=0; i<10; i++)
    {
        sleep(1);
        randomNumber[i]=getRandomNumber();
        cout <<i<<". random number is: "<<randomNumber[i]<<endl;
        
    }  
    
    return 0;
}


int getRandomNumber()
{
    int aNumber = 0;
    
    srand((unsigned int) time(NULL));
    aNumber =  (rand()%100)+1;
    return aNumber;
    
}