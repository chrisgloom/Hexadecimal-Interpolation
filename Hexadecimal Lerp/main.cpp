//
//  main.cpp
//  Hexadecimal Lerp
//
//  Created by Chris Albatross Crawford on 10/18/15.
//  Copyright (c) 2015 Gloomworks. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

string userA, userB, userSteps="";

void thingFigurer (int numberA, int numberB, int steps){
    //Find the overall amount of change between our two values
    float difference = numberB - numberA;
    //Divide the change by desired steps to obtain a number that gets added to find each new value
    float lerpby = difference / steps;
    
    /*Start with the lower number and add lerpby the desired number of steps. Stop the loop when it reaches the upper value*/
    for (float i=numberA; i<numberB; i=i+lerpby) {
        
        //casts each generated number into hex and outputs to the console
        cout<<hex<<(int)i<<endl;
    }
};


int main(int argc, const char * argv[]) {
    
    cout<<"Welcome to HexLerp. Let's make some Chiptune.\nEnter a hexadecimal value to start from.\n";
    getline(cin,userA);
    cout<<"Now enter a hexadecimal value to end at\n";
    getline(cin,userB);
    cout<<"And how many decimal steps to reach our end value?\n";
    getline(cin,userSteps);
    cout<<"Cool, the values are:\n";
    thingFigurer(stoi(userA, nullptr, 16), stoi(userB, nullptr, 16), stoi(userSteps));
    
    return 0;
}
