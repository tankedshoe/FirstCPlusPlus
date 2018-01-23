//
//  Controller.cpp
//  FirstCPlusPlus
//
//  Created by Heaps, Dane on 1/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    cout << "I am in the constructor" << endl;
}

void Controller :: start()
{
    cout << "I am in the start method" << endl;
}

int Controller :: junkMeUp(int junked)
{
    junked = 0;
    
    junked += 1;
    cout << "I am a random method!!" << endl;
    return junked;
}
