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
#include <string>
using namespace std;

int getRandomNumber();

int lowestElement(int array[], int noOfElement);
int highestElement(int array[], int noOfElement);

int main(int argc, const char * argv[]) {
    srand((unsigned int) time(NULL));
    int randomNumber[10];
    int sortedNumberLowToHigh[10];
    int sortedNumberHighToLow[10];
    int lowElement = 0;
    int highElement = 0;
    string whatToDo;
    
    
    cout<<"please enter the way you want to sort your number. "<<endl;
    cout<<"You may choose from higherToLower or lowerToHigher. "<<endl;
    cin>>whatToDo;
    
    if (whatToDo == "lowerToHigher") {
        
    
    for (int i=0; i<10; i++)
    {
        randomNumber[i]=getRandomNumber();
        cout <<i<<". random number is: "<<randomNumber[i]<<endl;
    }
    
    cout << "==========================" << endl;
    
    
    
    for (int i=0; i<10; i++)
    {
        lowElement = lowestElement(randomNumber, 10);
        sortedNumberLowToHigh[i] = lowElement;
        
    }

    
    for (int i=0; i<10; i++) {
        cout << i << ". sorted number is: " << sortedNumberLowToHigh[i] << endl;
    }
    
    
    }
    
    else if(whatToDo == "higherToLower")
    {
        for (int i =0; i<10; i++)
        {
            randomNumber[i]=getRandomNumber();
            cout <<i<<". random number is: "<<randomNumber[i]<<endl;
        }
        
        
        cout << "==========================="<<endl;
        
        
        for (int i=0; i<10; i++)
        {
            highElement = highestElement(randomNumber, 10);
            sortedNumberHighToLow[i] = highElement;
        }
        
        for (int i=0; i<10; i++)
        {
            cout << ". sorted number is: " << sortedNumberHighToLow[i] << endl;
        }

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

int highestElement(int array[], int noOfElement){
    
    int highest =1;
    int highestIndex = 0;
    for(int i=0; i<noOfElement; i++) {
        
        if(array[i]>highest)
        {
            highest = array[i];
            highestIndex = i;
        }
    }
    
    array [highestIndex] = 1;
    
    return highest;
}

int getRandomNumber()
{
    int aNumber = 0;
    aNumber =  (rand()%100)+1;
    return aNumber;
    
}
