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

int lowestElement(int array[], int noOfElement);

int main(int argc, const char * argv[]) {
    srand((unsigned int) time(NULL));
    int randomNumber[10];
    int sortedNumber[10];
    int lowElement = 0;
    
    for (int i=0; i<10; i++)
    {
        randomNumber[i]=getRandomNumber();
        cout <<i<<". random number is: "<<randomNumber[i]<<endl;
    }
    
    cout << "==========================" << endl;
    
    
    
    for (int i=0; i<10; i++)
    {
        lowElement = lowestElement(randomNumber, 10);
        sortedNumber[i] = lowElement;
        
    }

    
    for (int i=0; i<10; i++) {
        cout << i << ". sorted number is: " << sortedNumber[i] << endl;
    }
    
    
    
    
    return 0;
}

int lowestElement(int array[], int noOfElement) {
    int lowest = 101;
    int lowestIndex = 0;
    for (int i=0; i<noOfElement; i++) {
        if (array[i]<lowest) {
            lowest = array[i];
            lowestIndex = i;
        }
    }
    
    
    
    array[lowestIndex] = 101;
    
    return lowest;
}


int getRandomNumber()
{
    int aNumber = 0;
    aNumber =  (rand()%100)+1;
    return aNumber;
    
}
